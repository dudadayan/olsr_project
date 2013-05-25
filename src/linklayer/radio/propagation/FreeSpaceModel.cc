/* **************************************************************************
 * file:        FreeSpace.cc
 *
 * author:      Oliver Graute, Andreas Kuntz, Felix Schmidt-Eisenlohr
 *
 * copyright:	(c) 2008 Institute of Telematics, University of Karlsruhe (TH)
 *
 * author:      Alfonso Ariza
 *              Malaga university
 *              This program is free software; you can redistribute it
 *              and/or modify it under the terms of the GNU General Public
 *              License as published by the Free Software Foundation; either
 *              version 2 of the License, or (at your option) any later
 *              version.
 *              For further information see file COPYING
 *              in the top level directory
 ***************************************************************************
 * part of:     SNE4OMF
 * description: - This Module implements the freespace radio propagations model
 * http://www.tm.uka.de/sne4omf
 *
 ***************************************************************************
 */

#include "ChannelControl.h"
#include "ChannelAccess.h"
#include "FreeSpaceModel.h"

#include <FWMath.h>
#include <string>
#include <iostream>
using namespace std;

Register_Class(FreeSpaceModel);

void FreeSpaceModel::initializeFreeSpace(cModule *radioModule)
{
	pathLossAlpha = radioModule->par("pathLossAlpha");
    cModule *cc = ChannelControl::get();
    if (pathLossAlpha < (double) (cc->par("alpha")))
        opp_error("PathLossReceptionModel: pathLossAlpha can't be smaller than in ChannelControl -- please adjust the parameters");
	Gt = pow(10, radioModule->par("TransmissionAntennaGainIndB").doubleValue()/10);
	Gr = pow(10, radioModule->par("ReceiveAntennaGainIndB").doubleValue()/10);
	L = pow(10, radioModule->par("SystemLossFactor").doubleValue()/10);
}

void FreeSpaceModel::initializeFrom(cModule *radioModule)
{
	initializeFreeSpace(radioModule);
}


double FreeSpaceModel::calculateReceivedPower(double pSend, double carrierFrequency, double distance)
{
	const double speedOfLight = 300000000.0;
    double waveLength = speedOfLight / carrierFrequency;
	double prec = freeSpace(Gt,Gr,L,pSend,waveLength,distance,pathLossAlpha);
    if (prec > pSend)
    	prec = pSend;
    return prec;
}

/** @brief calculates the power with the deterministic free space propagation model */
double FreeSpaceModel::freeSpace(double Gt,double Gr,double L,double Pt, double lambda, double distance, double alpha)
{
  /** @brief
     * Friis free space equation:
     *
     *       Pt * Gt * Gr * (lambda^2)
     *   P = --------------------------
     *       (4 * pi)^2 * d^alpha * L
     */

  if (distance == 0.0)
    return Pt;

 /** @return returns a power value */
  // Antennengewinn eines lambda/2-Dipols ist etwa 2,15 dBi
  // Pt is in milli watt
  double pr = (Pt * lambda * lambda * Gt * Gr / (16.0 *M_PI * M_PI * pow(distance, alpha) * L));
  //cout /*EV*/ << "FreeSpace Pr=" << pr << " Pt " << Pt << " lambda " << lambda << " Gt " << Gt << " Gr " << Gr << " distance " << distance << " L " << L << " PI " << M_PI << endl;
  return pr;
}


