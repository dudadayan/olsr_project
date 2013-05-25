//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 
import inet.base.NotificationBoard;
import inet.base.MMapBoard;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.transport.udp.UDP;
import inet.applications.udpapp.UDPApp;
import inet.nodes.inet.NetworkLayerGlobalArp;
import inet.linklayer.ieee80211.Ieee80211gNicAdhoc;
import inet.networklayer.manetrouting.ManetRouting;
import inet.mobility.BasicMobility;
import inet.mobility.NullMobility;

module Manet_Node
{
     parameters:
        @node();
        int numRadios = default(1);
        int numTcpApps = default(0);
        int numUdpApps = default(0);
        string tcpAppType = default("");
        string udpAppType = default("");
        string routingFile = default("");
        string mobilityType = default("NullMobility");
        @display("i=device/pocketpc_s");

    gates:
        input radioIn[numRadios] @directIn;

    submodules:
        notificationBoard: NotificationBoard {
            parameters:
                @display("p=60,70;i=block/control");
        }
        mmapBoard: MMapBoard {
            parameters:
                @display("p=60,307;i=block/blackboard");
        }
        interfaceTable: InterfaceTable {
            parameters:
                @display("p=60,150;i=block/table");
        }
        routingTable: RoutingTable {
            parameters:
                IPForward = true;
                routerId = "";
                routingFile = routingFile;
                @display("p=60,230;i=block/table");
        }
        udpApp[numUdpApps]: <udpAppType> like UDPApp {
            parameters:
                @display("i=block/app;p=272,67");
        }
        udp: UDP {
            parameters:
                @display("p=272,154;i=block/transport");
        }
        networkLayer: NetworkLayerGlobalArp {
            parameters:
                proxyARP = true;
                globalARP = true;
                @display("p=248,247;i=block/fork;q=queue");
            gates:
                ifIn[numRadios];
                ifOut[numRadios];
        }
        manetrouting: ManetRouting {
            parameters:
                @display("p=153,247;i=block/network2");
        }
        // the name of radio interface must have "wlan", valid examples wlan, wlan802, localwlan ....
        wlan[numRadios]: Ieee80211gNicAdhoc { // Nic80211 also works, it uses MF's 802.11 implementation
            parameters:
                @display("p=248,349;q=queue;i=block/ifcard");
        }
        //        wlan: Nic80211;
        //            display: "p=248,349;q=queue;i=block/ifcard";
//        mobility: NullMobility {
//            parameters:
//                //   x = x;
//                //                y = y;
//                @display("p=149,307;i=block/cogwheel");
//        }
        mobility: <mobilityType> like BasicMobility {
            parameters:
                @display("p=149,307;i=block/cogwheel");
                //@display("p=149,307");
        }
    connections allowunconnected:
    
        for i=0..numUdpApps-1 {
            udpApp[i].udpOut --> udp.appIn++;
            udpApp[i].udpIn <-- udp.appOut++;
        }

        udp.ipOut --> networkLayer.udpIn;
        udp.ipIn <-- networkLayer.udpOut;


        networkLayer.MANETOut --> manetrouting.from_ip;
        networkLayer.MANETIn <-- manetrouting.to_ip;

        // connections to network outside
        for i=0..numRadios-1 {
            radioIn[i] --> wlan[i].radioIn;
            wlan[i].uppergateOut --> networkLayer.ifIn[i];
            wlan[i].uppergateIn <-- networkLayer.ifOut[i];
        }
}