//
// Copyright (C) 2009 Lukáš Hlůže   lukas@hluze.cz
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

package inet.examples.wireless.lan80211e;

import inet.networklayer.autorouting.FlatNetworkConfigurator;
import inet.world.ChannelControl;
import inet.nodes.wireless.WirelessAPWithEthe;
import inet.nodes.wireless.WirelessHoste;
import inet.nodes.inet.StandardHost;

network Ecko
{
    parameters:
        int numwirelessClients;
        @display("bgb=514,354");
    submodules:
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=375,24");
        }
        channelControl: ChannelControl {
            @display("p=101,19");
        }
        wirelessAPWithEthe: WirelessAPWithEthe {
            @display("p=337,119;i=device/accesspoint");
        }
        wirelessClient[numwirelessClients]: WirelessHoste {
            //@display("p=315,235");

        }

        server: StandardHost {
            @display("p=117,122");
        }
    connections allowunconnected:
        wirelessAPWithEthe.ethg++ <--> server.ethg++;
}
