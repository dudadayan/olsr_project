#
# OMNeT++/OMNEST Makefile for libinet
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o inet -O out -XunderTest/applications -XunderTest/linklayer -XunderTest/transport
#

# Name of target to be created (-o option)
TARGET = libinet$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I. \
    -Iapplications \
    -Iapplications/dhcp \
    -Iapplications/ethernet \
    -Iapplications/generic \
    -Iapplications/pingapp \
    -Iapplications/rtpapp \
    -Iapplications/sctpapp \
    -Iapplications/tcpapp \
    -Iapplications/traci \
    -Iapplications/trafgen \
    -Iapplications/udpapp \
    -Ibase \
    -Ibattery \
    -Iexperimental \
    -Iexperimental/linklayer \
    -Iexperimental/linklayer/ieee80211 \
    -Iexperimental/linklayer/ieee80211/hwmp \
    -Iexperimental/linklayer/ieee80211/mgmt \
    -Iexperimental/nodes \
    -Iexperimental/nodes/adhoc \
    -Ilinklayer \
    -Ilinklayer/contract \
    -Ilinklayer/ethernet \
    -Ilinklayer/etherswitch \
    -Ilinklayer/ext \
    -Ilinklayer/ieee80211 \
    -Ilinklayer/ieee80211/mac \
    -Ilinklayer/ieee80211/mgmt \
    -Ilinklayer/mf80211 \
    -Ilinklayer/mf80211/macLayer \
    -Ilinklayer/mf80211/phyLayer \
    -Ilinklayer/mf80211/phyLayer/decider \
    -Ilinklayer/mf80211/phyLayer/snrEval \
    -Ilinklayer/mfcore \
    -Ilinklayer/ppp \
    -Ilinklayer/radio \
    -Ilinklayer/radio/errormodel \
    -Ilinklayer/radio/propagation \
    -Imobility \
    -Imobility/traci \
    -Inetworklayer \
    -Inetworklayer/arp \
    -Inetworklayer/autorouting \
    -Inetworklayer/common \
    -Inetworklayer/contract \
    -Inetworklayer/extras \
    -Inetworklayer/icmpv6 \
    -Inetworklayer/ipv4 \
    -Inetworklayer/ipv6 \
    -Inetworklayer/ldp \
    -Inetworklayer/manetrouting \
    -Inetworklayer/manetrouting/aodv \
    -Inetworklayer/manetrouting/aodv/aodv-uu \
    -Inetworklayer/manetrouting/base \
    -Inetworklayer/manetrouting/batman \
    -Inetworklayer/manetrouting/dsdv \
    -Inetworklayer/manetrouting/dsr \
    -Inetworklayer/manetrouting/dsr/dsr-uu \
    -Inetworklayer/manetrouting/dymo \
    -Inetworklayer/manetrouting/dymo/dymoum \
    -Inetworklayer/manetrouting/dymo_fau \
    -Inetworklayer/manetrouting/manager \
    -Inetworklayer/manetrouting/olsr \
    -Inetworklayer/mpls \
    -Inetworklayer/ospfv2 \
    -Inetworklayer/ospfv2/interface \
    -Inetworklayer/ospfv2/messagehandler \
    -Inetworklayer/ospfv2/neighbor \
    -Inetworklayer/ospfv2/router \
    -Inetworklayer/queue \
    -Inetworklayer/rsvp_te \
    -Inetworklayer/ted \
    -Inodes \
    -Inodes/adhoc \
    -Inodes/ethernet \
    -Inodes/inet \
    -Inodes/ipv6 \
    -Inodes/mpls \
    -Inodes/wireless \
    -Itransport \
    -Itransport/contract \
    -Itransport/rtp \
    -Itransport/rtp/profiles \
    -Itransport/rtp/profiles/avprofile \
    -Itransport/sctp \
    -Itransport/tcp \
    -Itransport/tcp/flavours \
    -Itransport/tcp/queues \
    -Itransport/tcp_nsc \
    -Itransport/tcp_nsc/queues \
    -Itransport/tcp_old \
    -Itransport/tcp_old/flavours \
    -Itransport/tcp_old/queues \
    -Itransport/udp \
    -IunderTest \
    -IunderTest/channels \
    -IunderTest/nodes \
    -IunderTest/nodes/WiMAX \
    -IunderTest/nodes/adhoc \
    -IunderTest/nodes/wireless \
    -IunderTest/wpan \
    -IunderTest/wpan/Isabel \
    -IunderTest/wpan/Isabel/Analysis \
    -IunderTest/wpan/Isabel/Base \
    -IunderTest/wpan/applications \
    -IunderTest/wpan/applications/Ieee802154TestApp \
    -IunderTest/wpan/linklayer \
    -IunderTest/wpan/linklayer/bmac \
    -IunderTest/wpan/linklayer/ieee802154 \
    -IunderTest/wpan/linklayer/ieee802154/contract \
    -IunderTest/wpan/linklayer/ieee802154/mac \
    -IunderTest/wpan/linklayer/ieee802154/phyLayer \
    -IunderTest/wpan/networklayer \
    -IunderTest/wpan/networklayer/Ieee802154StarRouting \
    -IunderTest/wpan/networklayer/contract \
    -IunderTest/wpan/nodes \
    -Iutil \
    -Iutil/headerserializers \
    -Iutil/headerserializers/headers \
    -Iworld \
    -Iworld/annotations \
    -Iworld/obstacles \
    -Iworld/traci

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/dhcp/DHCPServer.o \
    $O/applications/dhcp/DHCPClient.o \
    $O/applications/ethernet/EtherAppSrv.o \
    $O/applications/ethernet/EtherAppCli.o \
    $O/applications/generic/IPTrafGen.o \
    $O/applications/pingapp/PingApp.o \
    $O/applications/rtpapp/RTPApplication.o \
    $O/applications/sctpapp/SCTPClient.o \
    $O/applications/sctpapp/SCTPPeer.o \
    $O/applications/sctpapp/SCTPServer.o \
    $O/applications/tcpapp/TCPBasicClientApp.o \
    $O/applications/tcpapp/TCPSinkApp.o \
    $O/applications/tcpapp/TCPSessionApp.o \
    $O/applications/tcpapp/TCPGenericCliAppBase.o \
    $O/applications/tcpapp/TCPGenericSrvApp.o \
    $O/applications/tcpapp/TCPSrvHostApp.o \
    $O/applications/tcpapp/TCPSpoof.o \
    $O/applications/tcpapp/TCPEchoApp.o \
    $O/applications/tcpapp/TCPGenericSrvThread.o \
    $O/applications/tcpapp/TelnetApp.o \
    $O/applications/traci/TraCIDemo.o \
    $O/applications/traci/TraCITestApp.o \
    $O/applications/trafgen/TrafGenPar.o \
    $O/applications/trafgen/TrafGen.o \
    $O/applications/udpapp/UDPAppBase.o \
    $O/applications/udpapp/UDPSink.o \
    $O/applications/udpapp/UDPBasicBurst.o \
    $O/applications/udpapp/UDPEchoApp.o \
    $O/applications/udpapp/UDPVideoStreamCli.o \
    $O/applications/udpapp/UDPVideoStreamSvr.o \
    $O/applications/udpapp/UDPBasicBurst2.o \
    $O/applications/udpapp/UDPBasicApp.o \
    $O/base/MMapBoard.o \
    $O/base/NotificationBoard.o \
    $O/base/Sink.o \
    $O/base/ModuleAccess.o \
    $O/base/PassiveQueueBase.o \
    $O/base/Blackboard.o \
    $O/base/AbstractQueue.o \
    $O/base/ReassemblyBuffer.o \
    $O/base/Join.o \
    $O/base/NotifierConsts.o \
    $O/base/ProtocolMap.o \
    $O/base/BasicModule.o \
    $O/base/QueueBase.o \
    $O/base/QueueWithQoS.o \
    $O/base/ByteArrayMessage.o \
    $O/battery/InetSimpleBattery.o \
    $O/battery/BasicBattery.o \
    $O/experimental/linklayer/ieee80211/hwmp/hwmp-rtable.o \
    $O/experimental/linklayer/ieee80211/hwmp/hwmp.o \
    $O/experimental/linklayer/ieee80211/mgmt/Ieee80211MeshLwmpls.o \
    $O/experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.o \
    $O/experimental/linklayer/ieee80211/mgmt/lwmpls_data.o \
    $O/experimental/linklayer/ieee80211/mgmt/Ieee80211Etx.o \
    $O/experimental/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o \
    $O/linklayer/contract/MACAddress.o \
    $O/linklayer/ethernet/EtherLLC.o \
    $O/linklayer/ethernet/EtherMAC2.o \
    $O/linklayer/ethernet/EtherHub.o \
    $O/linklayer/ethernet/EtherMACBase.o \
    $O/linklayer/ethernet/EtherEncap.o \
    $O/linklayer/ethernet/EtherBus.o \
    $O/linklayer/ethernet/EtherMAC.o \
    $O/linklayer/etherswitch/MACRelayUnitBase.o \
    $O/linklayer/etherswitch/MACRelayUnitNP.o \
    $O/linklayer/etherswitch/MACRelayUnitPP.o \
    $O/linklayer/ext/ExtInterface.o \
    $O/linklayer/ext/cSocketRTScheduler.o \
    $O/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/linklayer/ieee80211/mac/Ieee80211gMac.o \
    $O/linklayer/ieee80211/mac/FrameBlock.o \
    $O/linklayer/ieee80211/mac/Ieee80211eMac.o \
    $O/linklayer/ieee80211/mac/Ieee80211egMac.o \
    $O/linklayer/ieee80211/mac/BlockAckFrame.o \
    $O/linklayer/ieee80211/mac/Ieee80211aMac.o \
    $O/linklayer/ieee80211/mac/BlockAckCache.o \
    $O/linklayer/ieee80211/mac/Ieee80211NewMac.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211eClassifier.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/linklayer/mf80211/macLayer/CSMAMacLayer.o \
    $O/linklayer/mf80211/macLayer/Mac80211.o \
    $O/linklayer/mf80211/phyLayer/decider/SnrDecider.o \
    $O/linklayer/mf80211/phyLayer/decider/Decider80211.o \
    $O/linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.o \
    $O/linklayer/mf80211/phyLayer/snrEval/SnrEval80211.o \
    $O/linklayer/mf80211/phyLayer/snrEval/SnrEval.o \
    $O/linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.o \
    $O/linklayer/mfcore/BasicDecider.o \
    $O/linklayer/mfcore/WirelessMacBase.o \
    $O/linklayer/mfcore/BasicSnrEval.o \
    $O/linklayer/ppp/PPP.o \
    $O/linklayer/ppp/DropsGenerator.o \
    $O/linklayer/ppp/DuplicatesGenerator.o \
    $O/linklayer/ppp/ThruputMeter.o \
    $O/linklayer/radio/Ieee80211aRadioModel.o \
    $O/linklayer/radio/Ieee80211NewRadioModel.o \
    $O/linklayer/radio/BerParseFile.o \
    $O/linklayer/radio/GenericRadioModel.o \
    $O/linklayer/radio/bpskMode.o \
    $O/linklayer/radio/Ieee80211RadioModel.o \
    $O/linklayer/radio/Ieee80211gRadioModel.o \
    $O/linklayer/radio/AbstractRadio.o \
    $O/linklayer/radio/GenericRadio.o \
    $O/linklayer/radio/Ieee80211NewRadio.o \
    $O/linklayer/radio/Ieee80211gRadio.o \
    $O/linklayer/radio/Ieee80211Radio.o \
    $O/linklayer/radio/TwoRayModel.o \
    $O/linklayer/radio/qamMode.o \
    $O/linklayer/radio/transmissionMode.o \
    $O/linklayer/radio/AbstractRadioExtended.o \
    $O/linklayer/radio/Modulation.o \
    $O/linklayer/radio/PathLossReceptionModel.o \
    $O/linklayer/radio/Ieee80211aRadio.o \
    $O/linklayer/radio/errormodel/yans-error-rate-model.o \
    $O/linklayer/radio/errormodel/WifiMode.o \
    $O/linklayer/radio/errormodel/dsss-error-rate-model.o \
    $O/linklayer/radio/propagation/RayleighModel.o \
    $O/linklayer/radio/propagation/LogNormalShadowingModel.o \
    $O/linklayer/radio/propagation/RiceModel.o \
    $O/linklayer/radio/propagation/NakagamiModel.o \
    $O/linklayer/radio/propagation/TwoRayGroundModel.o \
    $O/linklayer/radio/propagation/FreeSpaceModel.o \
    $O/mobility/ChiangMobility.o \
    $O/mobility/RestrictedRandomWPMobility.o \
    $O/mobility/NullMobility.o \
    $O/mobility/GaussMarkovMobility.o \
    $O/mobility/MassMobility.o \
    $O/mobility/RectangleMobility.o \
    $O/mobility/BonnMotionMobility.o \
    $O/mobility/Ns2MotionMobility.o \
    $O/mobility/RestrictedLinearMobility.o \
    $O/mobility/BonnMotionFileCache.o \
    $O/mobility/StaticGridMobility.o \
    $O/mobility/ANSimMobility.o \
    $O/mobility/LinearMobility.o \
    $O/mobility/BasicMobility.o \
    $O/mobility/CircleMobility.o \
    $O/mobility/RandomWPMobility.o \
    $O/mobility/LineSegmentsMobilityBase.o \
    $O/mobility/RestrictedConstSpeedMobility.o \
    $O/mobility/RandomWPMobilityTrace.o \
    $O/mobility/ConstSpeedMobility.o \
    $O/mobility/TurtleMobility.o \
    $O/mobility/traci/TraCIMobility.o \
    $O/networklayer/arp/ARP.o \
    $O/networklayer/autorouting/HostAutoConfigurator.o \
    $O/networklayer/autorouting/HostAutoConfigurator2.o \
    $O/networklayer/autorouting/FlatNetworkConfigurator6.o \
    $O/networklayer/autorouting/NetworkConfigurator.o \
    $O/networklayer/autorouting/FlatNetworkConfigurator.o \
    $O/networklayer/common/InterfaceTable.o \
    $O/networklayer/common/InterfaceEntry.o \
    $O/networklayer/contract/IPControlInfo.o \
    $O/networklayer/contract/IPvXAddress.o \
    $O/networklayer/contract/IPAddress.o \
    $O/networklayer/contract/IPAddressResolver.o \
    $O/networklayer/contract/IPv6Address.o \
    $O/networklayer/contract/IPv6ControlInfo.o \
    $O/networklayer/extras/Dummy.o \
    $O/networklayer/extras/NetworkInfo.o \
    $O/networklayer/extras/FailureManager.o \
    $O/networklayer/icmpv6/ICMPv6.o \
    $O/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/networklayer/ipv4/RoutingTable.o \
    $O/networklayer/ipv4/IPv4InterfaceData.o \
    $O/networklayer/ipv4/RoutingTableParser.o \
    $O/networklayer/ipv4/ICMP.o \
    $O/networklayer/ipv4/IPFragBuf.o \
    $O/networklayer/ipv4/IPRoute.o \
    $O/networklayer/ipv4/ErrorHandling.o \
    $O/networklayer/ipv4/IPRouteRule.o \
    $O/networklayer/ipv4/IP.o \
    $O/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/networklayer/ipv6/IPv6Datagram.o \
    $O/networklayer/ipv6/RoutingTable6.o \
    $O/networklayer/ipv6/IPv6FragBuf.o \
    $O/networklayer/ipv6/IPv6InterfaceData.o \
    $O/networklayer/ipv6/IPv6.o \
    $O/networklayer/ldp/LDP.o \
    $O/networklayer/manetrouting/aodv/packet_queue_omnet.o \
    $O/networklayer/manetrouting/aodv/aodv_uu_omnet.o \
    $O/networklayer/manetrouting/aodv/aodv_msg_struct.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/debug_aodv.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_socket.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/locality.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_hello.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.o \
    $O/networklayer/manetrouting/base/ManetRoutingBase.o \
    $O/networklayer/manetrouting/base/int128.o \
    $O/networklayer/manetrouting/base/uint128.o \
    $O/networklayer/manetrouting/batman/BatmanMain.o \
    $O/networklayer/manetrouting/batman/batmanHna.o \
    $O/networklayer/manetrouting/batman/BatmanData.o \
    $O/networklayer/manetrouting/dsdv/DSDV_2.o \
    $O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o \
    $O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/neigh.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o \
    $O/networklayer/manetrouting/dymo/dymo_msg_struct.o \
    $O/networklayer/manetrouting/dymo/dymo_um_omnet.o \
    $O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o \
    $O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_re.o \
    $O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o \
    $O/networklayer/manetrouting/dymo/dymoum/rtable.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o \
    $O/networklayer/manetrouting/dymo/dymoum/blacklist.o \
    $O/networklayer/manetrouting/dymo/dymoum/timer_queue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO.o \
    $O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o \
    $O/networklayer/manetrouting/manager/ManetManager.o \
    $O/networklayer/manetrouting/olsr/OLSR_state.o \
    $O/networklayer/manetrouting/olsr/OLSR_rtable.o \
    $O/networklayer/manetrouting/olsr/OLSR.o \
    $O/networklayer/mpls/LIBTable.o \
    $O/networklayer/mpls/MPLS.o \
    $O/networklayer/mpls/MPLSPacket.o \
    $O/networklayer/ospfv2/OSPFRouting.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/networklayer/ospfv2/router/OSPFRouter.o \
    $O/networklayer/ospfv2/router/SummaryLSA.o \
    $O/networklayer/ospfv2/router/NetworkLSA.o \
    $O/networklayer/ospfv2/router/OSPFArea.o \
    $O/networklayer/ospfv2/router/RouterLSA.o \
    $O/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/networklayer/queue/DropTailQueue.o \
    $O/networklayer/queue/BasicDSCPClassifier.o \
    $O/networklayer/queue/DropTailQoSQueue.o \
    $O/networklayer/queue/WeightedFairQueue.o \
    $O/networklayer/queue/REDQueue.o \
    $O/networklayer/rsvp_te/Utils.o \
    $O/networklayer/rsvp_te/SimpleClassifier.o \
    $O/networklayer/rsvp_te/RSVP.o \
    $O/networklayer/ted/LinkStateRouting.o \
    $O/networklayer/ted/TED.o \
    $O/transport/contract/TCPSocket.o \
    $O/transport/contract/TCPSocketMap.o \
    $O/transport/contract/UDPSocket.o \
    $O/transport/contract/SCTPSocket.o \
    $O/transport/rtp/RTP.o \
    $O/transport/rtp/RTPSenderInfo.o \
    $O/transport/rtp/RTCPPacket.o \
    $O/transport/rtp/RTPProfile.o \
    $O/transport/rtp/RTPReceiverInfo.o \
    $O/transport/rtp/RTPPayloadSender.o \
    $O/transport/rtp/RTCP.o \
    $O/transport/rtp/RTPParticipantInfo.o \
    $O/transport/rtp/RTPPayloadReceiver.o \
    $O/transport/rtp/sdes.o \
    $O/transport/rtp/reports.o \
    $O/transport/rtp/RTPInnerPacket.o \
    $O/transport/rtp/RTPInterfacePacket.o \
    $O/transport/rtp/RTPPacket.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/transport/sctp/SCTPReceiveStream.o \
    $O/transport/sctp/SCTP.o \
    $O/transport/sctp/SCTPMessage.o \
    $O/transport/sctp/SCTPAssociationEventProc.o \
    $O/transport/sctp/SCTPAssociationRcvMessage.o \
    $O/transport/sctp/SCTPAssociationUtil.o \
    $O/transport/sctp/SCTPCCFunctions.o \
    $O/transport/sctp/SCTPAlg.o \
    $O/transport/sctp/SCTPAssociationSendAll.o \
    $O/transport/sctp/SCTPSSFunctions.o \
    $O/transport/sctp/SCTPQueue.o \
    $O/transport/sctp/SCTPAssociationBase.o \
    $O/transport/sctp/SCTPSendStream.o \
    $O/transport/tcp/TCP.o \
    $O/transport/tcp/TCPConnectionEventProc.o \
    $O/transport/tcp/TCPConnectionUtil.o \
    $O/transport/tcp/TCPSACKRexmitQueue.o \
    $O/transport/tcp/TCPConnectionRcvSegment.o \
    $O/transport/tcp/TCPConnectionBase.o \
    $O/transport/tcp/TCPSegment.o \
    $O/transport/tcp/flavours/TCPNewReno.o \
    $O/transport/tcp/flavours/DumbTCP.o \
    $O/transport/tcp/flavours/TCPReno.o \
    $O/transport/tcp/flavours/TCPBaseAlg.o \
    $O/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/transport/tcp/flavours/TCPTahoe.o \
    $O/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/transport/tcp_nsc/TCP_NSC.o \
    $O/transport/tcp_nsc/TCP_NSC_Connection.o \
    $O/transport/tcp_nsc/queues/TCP_NSC_VirtualDataQueues.o \
    $O/transport/tcp_old/TCP.o \
    $O/transport/tcp_old/TCPConnectionEventProc.o \
    $O/transport/tcp_old/TCPConnectionUtil.o \
    $O/transport/tcp_old/TCPConnectionRcvSegment.o \
    $O/transport/tcp_old/TCPConnectionBase.o \
    $O/transport/tcp_old/flavours/DumbTCP.o \
    $O/transport/tcp_old/flavours/TCPReno.o \
    $O/transport/tcp_old/flavours/TCPBaseAlg.o \
    $O/transport/tcp_old/flavours/TCPNoCongestionControl.o \
    $O/transport/tcp_old/flavours/TCPTahoe.o \
    $O/transport/tcp_old/flavours/TCPTahoeRenoFamily.o \
    $O/transport/tcp_old/queues/TCPVirtualDataSendQueue.o \
    $O/transport/tcp_old/queues/TCPVirtualDataRcvQueue.o \
    $O/transport/tcp_old/queues/TCPMsgBasedSendQueue.o \
    $O/transport/tcp_old/queues/TCPMsgBasedRcvQueue.o \
    $O/transport/udp/UDP.o \
    $O/underTest/channels/ProgramedFailureChannel.o \
    $O/underTest/channels/LinkFailureManager.o \
    $O/underTest/channels/MyThroughputMeteringChannel.o \
    $O/underTest/wpan/Isabel/Analysis/AnalysisEnergy.o \
    $O/underTest/wpan/Isabel/Base/Display.o \
    $O/underTest/wpan/applications/Ieee802154TestApp/Ieee802154TestApp.o \
    $O/underTest/wpan/linklayer/bmac/BMacLayer.o \
    $O/underTest/wpan/linklayer/ieee802154/mac/Ieee802154Link.o \
    $O/underTest/wpan/linklayer/ieee802154/mac/csma802154.o \
    $O/underTest/wpan/linklayer/ieee802154/mac/Ieee802154Mac.o \
    $O/underTest/wpan/linklayer/ieee802154/phyLayer/Ieee802154Phy.o \
    $O/underTest/wpan/linklayer/ieee802154/phyLayer/Ieee802154RadioModel.o \
    $O/underTest/wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.o \
    $O/util/NetAnimTrace.o \
    $O/util/dijktraKShortest.o \
    $O/util/ThruputMeteringChannel.o \
    $O/util/XMLUtils.o \
    $O/util/TCPDump.o \
    $O/util/PowerControlManager.o \
    $O/util/NAMTraceWriter.o \
    $O/util/common.o \
    $O/util/opp_utils.o \
    $O/util/headerserializers/ICMPSerializer.o \
    $O/util/headerserializers/SCTPSerializer.o \
    $O/util/headerserializers/IPSerializer.o \
    $O/util/headerserializers/TCPIPchecksum.o \
    $O/util/headerserializers/UDPSerializer.o \
    $O/util/headerserializers/TCPSerializer.o \
    $O/world/ChannelAccessExtended.o \
    $O/world/NAMTrace.o \
    $O/world/ChannelInstaller.o \
    $O/world/ScenarioManager.o \
    $O/world/ChannelControlExtended.o \
    $O/world/ChannelControl.o \
    $O/world/ChannelAccess.o \
    $O/world/annotations/AnnotationManager.o \
    $O/world/annotations/AnnotationDummy.o \
    $O/world/obstacles/Obstacle.o \
    $O/world/obstacles/ObstacleControl.o \
    $O/world/traci/TraCIScenarioManagerLaunchd.o \
    $O/world/traci/TraCIScenarioManager.o \
    $O/applications/dhcp/DHCP_m.o \
    $O/applications/ethernet/EtherApp_m.o \
    $O/applications/pingapp/PingPayload_m.o \
    $O/applications/tcpapp/GenericAppMsg_m.o \
    $O/applications/udpapp/UDPEchoAppMsg_m.o \
    $O/base/ByteArrayMessage_m.o \
    $O/experimental/linklayer/ieee80211/mgmt/ETXPacket_m.o \
    $O/experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.o \
    $O/linklayer/contract/ControlInfoBreakLink_m.o \
    $O/linklayer/contract/PhyControlInfo_m.o \
    $O/linklayer/contract/MeshControlInfo_m.o \
    $O/linklayer/contract/Radio80211aControlInfo_m.o \
    $O/linklayer/contract/Ieee802Ctrl_m.o \
    $O/linklayer/ethernet/EtherFrame_m.o \
    $O/linklayer/ext/ExtFrame_m.o \
    $O/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/linklayer/mf80211/macLayer/Mac80211Pkt_m.o \
    $O/linklayer/mf80211/macLayer/MacPkt_m.o \
    $O/linklayer/mfcore/AirFrame_m.o \
    $O/linklayer/mfcore/SnrControlInfo_m.o \
    $O/linklayer/mfcore/TransmComplete_m.o \
    $O/linklayer/ppp/PPPFrame_m.o \
    $O/networklayer/arp/ARPPacket_m.o \
    $O/networklayer/contract/IPv6ControlInfo_m.o \
    $O/networklayer/contract/IPProtocolId_m.o \
    $O/networklayer/contract/IPControlInfo_m.o \
    $O/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/networklayer/ipv4/ControlManetRouting_m.o \
    $O/networklayer/ipv4/IPDatagram_m.o \
    $O/networklayer/ipv4/ICMPMessage_m.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/networklayer/ipv6/IPv6Datagram_m.o \
    $O/networklayer/ldp/LDPPacket_m.o \
    $O/networklayer/manetrouting/batman/BatmanMsg_m.o \
    $O/networklayer/manetrouting/dsdv/DSDVhello_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o \
    $O/networklayer/manetrouting/olsr/OLSRpkt_m.o \
    $O/networklayer/ospfv2/OSPFPacket_m.o \
    $O/networklayer/ospfv2/OSPFTimer_m.o \
    $O/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/networklayer/rsvp_te/RSVPHello_m.o \
    $O/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/networklayer/rsvp_te/IntServ_m.o \
    $O/networklayer/ted/LinkStatePacket_m.o \
    $O/networklayer/ted/TED_m.o \
    $O/transport/contract/TCPCommand_m.o \
    $O/transport/contract/SCTPCommand_m.o \
    $O/transport/contract/UDPControlInfo_m.o \
    $O/transport/rtp/RTPSenderControlMessage_m.o \
    $O/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/transport/sctp/SCTPMessage_m.o \
    $O/transport/tcp/TCPSegment_m.o \
    $O/transport/udp/UDPPacket_m.o \
    $O/underTest/channels/LinkFailureMessage_m.o \
    $O/underTest/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.o \
    $O/underTest/wpan/linklayer/bmac/bmacpkt_m.o \
    $O/underTest/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.o \
    $O/underTest/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.o \
    $O/underTest/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.o \
    $O/util/PowerControlMessages_m.o

# Message files
MSGFILES = \
    applications/dhcp/DHCP.msg \
    applications/ethernet/EtherApp.msg \
    applications/pingapp/PingPayload.msg \
    applications/tcpapp/GenericAppMsg.msg \
    applications/udpapp/UDPEchoAppMsg.msg \
    base/ByteArrayMessage.msg \
    experimental/linklayer/ieee80211/mgmt/ETXPacket.msg \
    experimental/linklayer/ieee80211/mgmt/LWMPLSPacket.msg \
    linklayer/contract/ControlInfoBreakLink.msg \
    linklayer/contract/PhyControlInfo.msg \
    linklayer/contract/MeshControlInfo.msg \
    linklayer/contract/Radio80211aControlInfo.msg \
    linklayer/contract/Ieee802Ctrl.msg \
    linklayer/ethernet/EtherFrame.msg \
    linklayer/ext/ExtFrame.msg \
    linklayer/ieee80211/mac/Ieee80211Frame.msg \
    linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    linklayer/mf80211/macLayer/Mac80211Pkt.msg \
    linklayer/mf80211/macLayer/MacPkt.msg \
    linklayer/mfcore/AirFrame.msg \
    linklayer/mfcore/SnrControlInfo.msg \
    linklayer/mfcore/TransmComplete.msg \
    linklayer/ppp/PPPFrame.msg \
    networklayer/arp/ARPPacket.msg \
    networklayer/contract/IPv6ControlInfo.msg \
    networklayer/contract/IPProtocolId.msg \
    networklayer/contract/IPControlInfo.msg \
    networklayer/icmpv6/ICMPv6Message.msg \
    networklayer/icmpv6/IPv6NDMessage.msg \
    networklayer/ipv4/ControlManetRouting.msg \
    networklayer/ipv4/IPDatagram.msg \
    networklayer/ipv4/ICMPMessage.msg \
    networklayer/ipv6/IPv6ExtensionHeaders.msg \
    networklayer/ipv6/IPv6Datagram.msg \
    networklayer/ldp/LDPPacket.msg \
    networklayer/manetrouting/batman/BatmanMsg.msg \
    networklayer/manetrouting/dsdv/DSDVhello.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RERR.msg \
    networklayer/manetrouting/dymo_fau/DYMO_UERR.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREQ.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RM.msg \
    networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Packet.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREP.msg \
    networklayer/manetrouting/olsr/OLSRpkt.msg \
    networklayer/ospfv2/OSPFPacket.msg \
    networklayer/ospfv2/OSPFTimer.msg \
    networklayer/rsvp_te/RSVPPacket.msg \
    networklayer/rsvp_te/RSVPHello.msg \
    networklayer/rsvp_te/SignallingMsg.msg \
    networklayer/rsvp_te/RSVPResvMsg.msg \
    networklayer/rsvp_te/RSVPPathMsg.msg \
    networklayer/rsvp_te/IntServ.msg \
    networklayer/ted/LinkStatePacket.msg \
    networklayer/ted/TED.msg \
    transport/contract/TCPCommand.msg \
    transport/contract/SCTPCommand.msg \
    transport/contract/UDPControlInfo.msg \
    transport/rtp/RTPSenderControlMessage.msg \
    transport/rtp/RTPSenderStatusMessage.msg \
    transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    transport/sctp/SCTPMessage.msg \
    transport/tcp/TCPSegment.msg \
    transport/udp/UDPPacket.msg \
    underTest/channels/LinkFailureMessage.msg \
    underTest/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt.msg \
    underTest/wpan/linklayer/bmac/bmacpkt.msg \
    underTest/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives.msg \
    underTest/wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg \
    underTest/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo.msg \
    util/PowerControlMessages.msg

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# inserted from file 'makefrag':
# if you want to use external interfaces with inet, you should install
# winpcap (on windows) or libpcap-dev (on linux) and re-run ./configure in
# the omnetpp root directory and comment out the following line:
HAVE_PCAP=no

ifeq ($(HAVE_PCAP),yes)
  # link with PCAP libs too
  LIBS += $(PCAP_LIBS)
else
  # remove the HAVE_PCAP define if we do not need PCAP
  CFLAGS := $(filter-out -DHAVE_PCAP,$(CFLAGS))
endif

# TCP implementaion using the Network Simulation Cradle
NSC_VERSION= $(shell ls -d ../3rdparty/nsc* 2>/dev/null | sed 's/^.*-//')

ifneq ($(NSC_VERSION),)
  CFLAGS += -DWITH_TCP_NSC -I../3rdparty/nsc-$(NSC_VERSION)/sim
  LIBS += -Wl,-rpath,`abspath ../3rdparty/nsc-$(NSC_VERSION)`
endif

# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating shared library: $@
	$(Q)$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f inet inet.exe libinet.so libinet.a libinet.dll libinet.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f applications/*_m.cc applications/*_m.h
	$(Q)-rm -f applications/dhcp/*_m.cc applications/dhcp/*_m.h
	$(Q)-rm -f applications/ethernet/*_m.cc applications/ethernet/*_m.h
	$(Q)-rm -f applications/generic/*_m.cc applications/generic/*_m.h
	$(Q)-rm -f applications/pingapp/*_m.cc applications/pingapp/*_m.h
	$(Q)-rm -f applications/rtpapp/*_m.cc applications/rtpapp/*_m.h
	$(Q)-rm -f applications/sctpapp/*_m.cc applications/sctpapp/*_m.h
	$(Q)-rm -f applications/tcpapp/*_m.cc applications/tcpapp/*_m.h
	$(Q)-rm -f applications/traci/*_m.cc applications/traci/*_m.h
	$(Q)-rm -f applications/trafgen/*_m.cc applications/trafgen/*_m.h
	$(Q)-rm -f applications/udpapp/*_m.cc applications/udpapp/*_m.h
	$(Q)-rm -f base/*_m.cc base/*_m.h
	$(Q)-rm -f battery/*_m.cc battery/*_m.h
	$(Q)-rm -f experimental/*_m.cc experimental/*_m.h
	$(Q)-rm -f experimental/linklayer/*_m.cc experimental/linklayer/*_m.h
	$(Q)-rm -f experimental/linklayer/ieee80211/*_m.cc experimental/linklayer/ieee80211/*_m.h
	$(Q)-rm -f experimental/linklayer/ieee80211/hwmp/*_m.cc experimental/linklayer/ieee80211/hwmp/*_m.h
	$(Q)-rm -f experimental/linklayer/ieee80211/mgmt/*_m.cc experimental/linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f experimental/nodes/*_m.cc experimental/nodes/*_m.h
	$(Q)-rm -f experimental/nodes/adhoc/*_m.cc experimental/nodes/adhoc/*_m.h
	$(Q)-rm -f linklayer/*_m.cc linklayer/*_m.h
	$(Q)-rm -f linklayer/contract/*_m.cc linklayer/contract/*_m.h
	$(Q)-rm -f linklayer/ethernet/*_m.cc linklayer/ethernet/*_m.h
	$(Q)-rm -f linklayer/etherswitch/*_m.cc linklayer/etherswitch/*_m.h
	$(Q)-rm -f linklayer/ext/*_m.cc linklayer/ext/*_m.h
	$(Q)-rm -f linklayer/ieee80211/*_m.cc linklayer/ieee80211/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mac/*_m.cc linklayer/ieee80211/mac/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mgmt/*_m.cc linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f linklayer/mf80211/*_m.cc linklayer/mf80211/*_m.h
	$(Q)-rm -f linklayer/mf80211/macLayer/*_m.cc linklayer/mf80211/macLayer/*_m.h
	$(Q)-rm -f linklayer/mf80211/phyLayer/*_m.cc linklayer/mf80211/phyLayer/*_m.h
	$(Q)-rm -f linklayer/mf80211/phyLayer/decider/*_m.cc linklayer/mf80211/phyLayer/decider/*_m.h
	$(Q)-rm -f linklayer/mf80211/phyLayer/snrEval/*_m.cc linklayer/mf80211/phyLayer/snrEval/*_m.h
	$(Q)-rm -f linklayer/mfcore/*_m.cc linklayer/mfcore/*_m.h
	$(Q)-rm -f linklayer/ppp/*_m.cc linklayer/ppp/*_m.h
	$(Q)-rm -f linklayer/radio/*_m.cc linklayer/radio/*_m.h
	$(Q)-rm -f linklayer/radio/errormodel/*_m.cc linklayer/radio/errormodel/*_m.h
	$(Q)-rm -f linklayer/radio/propagation/*_m.cc linklayer/radio/propagation/*_m.h
	$(Q)-rm -f mobility/*_m.cc mobility/*_m.h
	$(Q)-rm -f mobility/traci/*_m.cc mobility/traci/*_m.h
	$(Q)-rm -f networklayer/*_m.cc networklayer/*_m.h
	$(Q)-rm -f networklayer/arp/*_m.cc networklayer/arp/*_m.h
	$(Q)-rm -f networklayer/autorouting/*_m.cc networklayer/autorouting/*_m.h
	$(Q)-rm -f networklayer/common/*_m.cc networklayer/common/*_m.h
	$(Q)-rm -f networklayer/contract/*_m.cc networklayer/contract/*_m.h
	$(Q)-rm -f networklayer/extras/*_m.cc networklayer/extras/*_m.h
	$(Q)-rm -f networklayer/icmpv6/*_m.cc networklayer/icmpv6/*_m.h
	$(Q)-rm -f networklayer/ipv4/*_m.cc networklayer/ipv4/*_m.h
	$(Q)-rm -f networklayer/ipv6/*_m.cc networklayer/ipv6/*_m.h
	$(Q)-rm -f networklayer/ldp/*_m.cc networklayer/ldp/*_m.h
	$(Q)-rm -f networklayer/manetrouting/*_m.cc networklayer/manetrouting/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv/*_m.cc networklayer/manetrouting/aodv/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv/aodv-uu/*_m.cc networklayer/manetrouting/aodv/aodv-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/base/*_m.cc networklayer/manetrouting/base/*_m.h
	$(Q)-rm -f networklayer/manetrouting/batman/*_m.cc networklayer/manetrouting/batman/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsdv/*_m.cc networklayer/manetrouting/dsdv/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/*_m.cc networklayer/manetrouting/dsr/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/dsr-uu/*_m.cc networklayer/manetrouting/dsr/dsr-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/*_m.cc networklayer/manetrouting/dymo/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/dymoum/*_m.cc networklayer/manetrouting/dymo/dymoum/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo_fau/*_m.cc networklayer/manetrouting/dymo_fau/*_m.h
	$(Q)-rm -f networklayer/manetrouting/manager/*_m.cc networklayer/manetrouting/manager/*_m.h
	$(Q)-rm -f networklayer/manetrouting/olsr/*_m.cc networklayer/manetrouting/olsr/*_m.h
	$(Q)-rm -f networklayer/mpls/*_m.cc networklayer/mpls/*_m.h
	$(Q)-rm -f networklayer/ospfv2/*_m.cc networklayer/ospfv2/*_m.h
	$(Q)-rm -f networklayer/ospfv2/interface/*_m.cc networklayer/ospfv2/interface/*_m.h
	$(Q)-rm -f networklayer/ospfv2/messagehandler/*_m.cc networklayer/ospfv2/messagehandler/*_m.h
	$(Q)-rm -f networklayer/ospfv2/neighbor/*_m.cc networklayer/ospfv2/neighbor/*_m.h
	$(Q)-rm -f networklayer/ospfv2/router/*_m.cc networklayer/ospfv2/router/*_m.h
	$(Q)-rm -f networklayer/queue/*_m.cc networklayer/queue/*_m.h
	$(Q)-rm -f networklayer/rsvp_te/*_m.cc networklayer/rsvp_te/*_m.h
	$(Q)-rm -f networklayer/ted/*_m.cc networklayer/ted/*_m.h
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h
	$(Q)-rm -f nodes/adhoc/*_m.cc nodes/adhoc/*_m.h
	$(Q)-rm -f nodes/ethernet/*_m.cc nodes/ethernet/*_m.h
	$(Q)-rm -f nodes/inet/*_m.cc nodes/inet/*_m.h
	$(Q)-rm -f nodes/ipv6/*_m.cc nodes/ipv6/*_m.h
	$(Q)-rm -f nodes/mpls/*_m.cc nodes/mpls/*_m.h
	$(Q)-rm -f nodes/wireless/*_m.cc nodes/wireless/*_m.h
	$(Q)-rm -f transport/*_m.cc transport/*_m.h
	$(Q)-rm -f transport/contract/*_m.cc transport/contract/*_m.h
	$(Q)-rm -f transport/rtp/*_m.cc transport/rtp/*_m.h
	$(Q)-rm -f transport/rtp/profiles/*_m.cc transport/rtp/profiles/*_m.h
	$(Q)-rm -f transport/rtp/profiles/avprofile/*_m.cc transport/rtp/profiles/avprofile/*_m.h
	$(Q)-rm -f transport/sctp/*_m.cc transport/sctp/*_m.h
	$(Q)-rm -f transport/tcp/*_m.cc transport/tcp/*_m.h
	$(Q)-rm -f transport/tcp/flavours/*_m.cc transport/tcp/flavours/*_m.h
	$(Q)-rm -f transport/tcp/queues/*_m.cc transport/tcp/queues/*_m.h
	$(Q)-rm -f transport/tcp_nsc/*_m.cc transport/tcp_nsc/*_m.h
	$(Q)-rm -f transport/tcp_nsc/queues/*_m.cc transport/tcp_nsc/queues/*_m.h
	$(Q)-rm -f transport/tcp_old/*_m.cc transport/tcp_old/*_m.h
	$(Q)-rm -f transport/tcp_old/flavours/*_m.cc transport/tcp_old/flavours/*_m.h
	$(Q)-rm -f transport/tcp_old/queues/*_m.cc transport/tcp_old/queues/*_m.h
	$(Q)-rm -f transport/udp/*_m.cc transport/udp/*_m.h
	$(Q)-rm -f underTest/*_m.cc underTest/*_m.h
	$(Q)-rm -f underTest/channels/*_m.cc underTest/channels/*_m.h
	$(Q)-rm -f underTest/nodes/*_m.cc underTest/nodes/*_m.h
	$(Q)-rm -f underTest/nodes/WiMAX/*_m.cc underTest/nodes/WiMAX/*_m.h
	$(Q)-rm -f underTest/nodes/adhoc/*_m.cc underTest/nodes/adhoc/*_m.h
	$(Q)-rm -f underTest/nodes/wireless/*_m.cc underTest/nodes/wireless/*_m.h
	$(Q)-rm -f underTest/wpan/*_m.cc underTest/wpan/*_m.h
	$(Q)-rm -f underTest/wpan/Isabel/*_m.cc underTest/wpan/Isabel/*_m.h
	$(Q)-rm -f underTest/wpan/Isabel/Analysis/*_m.cc underTest/wpan/Isabel/Analysis/*_m.h
	$(Q)-rm -f underTest/wpan/Isabel/Base/*_m.cc underTest/wpan/Isabel/Base/*_m.h
	$(Q)-rm -f underTest/wpan/applications/*_m.cc underTest/wpan/applications/*_m.h
	$(Q)-rm -f underTest/wpan/applications/Ieee802154TestApp/*_m.cc underTest/wpan/applications/Ieee802154TestApp/*_m.h
	$(Q)-rm -f underTest/wpan/linklayer/*_m.cc underTest/wpan/linklayer/*_m.h
	$(Q)-rm -f underTest/wpan/linklayer/bmac/*_m.cc underTest/wpan/linklayer/bmac/*_m.h
	$(Q)-rm -f underTest/wpan/linklayer/ieee802154/*_m.cc underTest/wpan/linklayer/ieee802154/*_m.h
	$(Q)-rm -f underTest/wpan/linklayer/ieee802154/contract/*_m.cc underTest/wpan/linklayer/ieee802154/contract/*_m.h
	$(Q)-rm -f underTest/wpan/linklayer/ieee802154/mac/*_m.cc underTest/wpan/linklayer/ieee802154/mac/*_m.h
	$(Q)-rm -f underTest/wpan/linklayer/ieee802154/phyLayer/*_m.cc underTest/wpan/linklayer/ieee802154/phyLayer/*_m.h
	$(Q)-rm -f underTest/wpan/networklayer/*_m.cc underTest/wpan/networklayer/*_m.h
	$(Q)-rm -f underTest/wpan/networklayer/Ieee802154StarRouting/*_m.cc underTest/wpan/networklayer/Ieee802154StarRouting/*_m.h
	$(Q)-rm -f underTest/wpan/networklayer/contract/*_m.cc underTest/wpan/networklayer/contract/*_m.h
	$(Q)-rm -f underTest/wpan/nodes/*_m.cc underTest/wpan/nodes/*_m.h
	$(Q)-rm -f util/*_m.cc util/*_m.h
	$(Q)-rm -f util/headerserializers/*_m.cc util/headerserializers/*_m.h
	$(Q)-rm -f util/headerserializers/headers/*_m.cc util/headerserializers/headers/*_m.h
	$(Q)-rm -f world/*_m.cc world/*_m.h
	$(Q)-rm -f world/annotations/*_m.cc world/annotations/*_m.h
	$(Q)-rm -f world/obstacles/*_m.cc world/obstacles/*_m.h
	$(Q)-rm -f world/traci/*_m.cc world/traci/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/dhcp/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/pingapp/*.cc applications/rtpapp/*.cc applications/sctpapp/*.cc applications/tcpapp/*.cc applications/traci/*.cc applications/trafgen/*.cc applications/udpapp/*.cc base/*.cc battery/*.cc experimental/*.cc experimental/linklayer/*.cc experimental/linklayer/ieee80211/*.cc experimental/linklayer/ieee80211/hwmp/*.cc experimental/linklayer/ieee80211/mgmt/*.cc experimental/nodes/*.cc experimental/nodes/adhoc/*.cc linklayer/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/etherswitch/*.cc linklayer/ext/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/mf80211/*.cc linklayer/mf80211/macLayer/*.cc linklayer/mf80211/phyLayer/*.cc linklayer/mf80211/phyLayer/decider/*.cc linklayer/mf80211/phyLayer/snrEval/*.cc linklayer/mfcore/*.cc linklayer/ppp/*.cc linklayer/radio/*.cc linklayer/radio/errormodel/*.cc linklayer/radio/propagation/*.cc mobility/*.cc mobility/traci/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/extras/*.cc networklayer/icmpv6/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ldp/*.cc networklayer/manetrouting/*.cc networklayer/manetrouting/aodv/*.cc networklayer/manetrouting/aodv/aodv-uu/*.cc networklayer/manetrouting/base/*.cc networklayer/manetrouting/batman/*.cc networklayer/manetrouting/dsdv/*.cc networklayer/manetrouting/dsr/*.cc networklayer/manetrouting/dsr/dsr-uu/*.cc networklayer/manetrouting/dymo/*.cc networklayer/manetrouting/dymo/dymoum/*.cc networklayer/manetrouting/dymo_fau/*.cc networklayer/manetrouting/manager/*.cc networklayer/manetrouting/olsr/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/queue/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc nodes/*.cc nodes/adhoc/*.cc nodes/ethernet/*.cc nodes/inet/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/wireless/*.cc transport/*.cc transport/contract/*.cc transport/rtp/*.cc transport/rtp/profiles/*.cc transport/rtp/profiles/avprofile/*.cc transport/sctp/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/tcp_nsc/*.cc transport/tcp_nsc/queues/*.cc transport/tcp_old/*.cc transport/tcp_old/flavours/*.cc transport/tcp_old/queues/*.cc transport/udp/*.cc underTest/*.cc underTest/channels/*.cc underTest/nodes/*.cc underTest/nodes/WiMAX/*.cc underTest/nodes/adhoc/*.cc underTest/nodes/wireless/*.cc underTest/wpan/*.cc underTest/wpan/Isabel/*.cc underTest/wpan/Isabel/Analysis/*.cc underTest/wpan/Isabel/Base/*.cc underTest/wpan/applications/*.cc underTest/wpan/applications/Ieee802154TestApp/*.cc underTest/wpan/linklayer/*.cc underTest/wpan/linklayer/bmac/*.cc underTest/wpan/linklayer/ieee802154/*.cc underTest/wpan/linklayer/ieee802154/contract/*.cc underTest/wpan/linklayer/ieee802154/mac/*.cc underTest/wpan/linklayer/ieee802154/phyLayer/*.cc underTest/wpan/networklayer/*.cc underTest/wpan/networklayer/Ieee802154StarRouting/*.cc underTest/wpan/networklayer/contract/*.cc underTest/wpan/nodes/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc world/*.cc world/annotations/*.cc world/obstacles/*.cc world/traci/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/dhcp/DHCPClient.o: applications/dhcp/DHCPClient.cc \
	applications/dhcp/Byte.h \
	applications/dhcp/DHCPClient.h \
	applications/dhcp/DHCPLease.h \
	applications/dhcp/DHCPOptions.h \
	applications/dhcp/DHCP_m.h \
	applications/udpapp/UDPAppBase.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	transport/contract/UDPControlInfo_m.h
$O/applications/dhcp/DHCPServer.o: applications/dhcp/DHCPServer.cc \
	applications/dhcp/Byte.h \
	applications/dhcp/DHCPLease.h \
	applications/dhcp/DHCPOptions.h \
	applications/dhcp/DHCPServer.h \
	applications/dhcp/DHCP_m.h \
	applications/udpapp/UDPAppBase.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	transport/contract/UDPControlInfo_m.h
$O/applications/dhcp/DHCP_m.o: applications/dhcp/DHCP_m.cc \
	applications/dhcp/Byte.h \
	applications/dhcp/DHCPOptions.h \
	applications/dhcp/DHCP_m.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
	applications/ethernet/EtherAppCli.h \
	applications/ethernet/EtherApp_m.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
	applications/ethernet/EtherAppSrv.h \
	applications/ethernet/EtherApp_m.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/applications/ethernet/EtherApp_m.o: applications/ethernet/EtherApp_m.cc \
	applications/ethernet/EtherApp_m.h \
	base/INETDefs.h
$O/applications/generic/IPTrafGen.o: applications/generic/IPTrafGen.cc \
	applications/generic/IPTrafGen.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
	applications/pingapp/PingApp.h \
	applications/pingapp/PingPayload_m.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h
$O/applications/pingapp/PingPayload_m.o: applications/pingapp/PingPayload_m.cc \
	applications/pingapp/PingPayload_m.h \
	base/INETDefs.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
	applications/rtpapp/RTPApplication.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTPInterfacePacket.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/applications/sctpapp/SCTPClient.o: applications/sctpapp/SCTPClient.cc \
	applications/sctpapp/SCTPClient.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/applications/sctpapp/SCTPPeer.o: applications/sctpapp/SCTPPeer.cc \
	applications/sctpapp/SCTPPeer.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/applications/sctpapp/SCTPServer.o: applications/sctpapp/SCTPServer.cc \
	applications/sctpapp/SCTPServer.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/applications/tcpapp/GenericAppMsg_m.o: applications/tcpapp/GenericAppMsg_m.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	base/INETDefs.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
	applications/tcpapp/TCPBasicClientApp.h \
	applications/tcpapp/TCPGenericCliAppBase.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
	applications/tcpapp/TCPEchoApp.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericCliAppBase.o: applications/tcpapp/TCPGenericCliAppBase.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericCliAppBase.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericSrvApp.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericSrvThread.h \
	applications/tcpapp/TCPSrvHostApp.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
	applications/tcpapp/TCPSessionApp.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
	applications/tcpapp/TCPSinkApp.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPSpoof.o: applications/tcpapp/TCPSpoof.cc \
	applications/tcpapp/TCPSpoof.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
	applications/tcpapp/TCPSrvHostApp.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
	applications/tcpapp/TCPGenericCliAppBase.h \
	applications/tcpapp/TelnetApp.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/traci/TraCIDemo.o: applications/traci/TraCIDemo.cc \
	applications/traci/TraCIDemo.h \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/traci/TraCIMobility.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	util/FWMath.h \
	world/ChannelControl.h \
	world/traci/TraCIScenarioManager.h
$O/applications/traci/TraCITestApp.o: applications/traci/TraCITestApp.cc \
	applications/traci/TraCITestApp.h \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/traci/TraCIMobility.h \
	util/FWMath.h \
	world/ChannelControl.h \
	world/traci/TraCIScenarioManager.h
$O/applications/trafgen/TrafGen.o: applications/trafgen/TrafGen.cc \
	applications/trafgen/TrafGen.h
$O/applications/trafgen/TrafGenPar.o: applications/trafgen/TrafGenPar.cc \
	applications/trafgen/TrafGenPar.h
$O/applications/udpapp/UDPAppBase.o: applications/udpapp/UDPAppBase.cc \
	applications/udpapp/UDPAppBase.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
	applications/udpapp/UDPAppBase.h \
	applications/udpapp/UDPBasicApp.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
	applications/udpapp/UDPAppBase.h \
	applications/udpapp/UDPBasicBurst.h \
	base/INETDefs.h \
	base/MMapBoard.h \
	base/ModuleAccess.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h
$O/applications/udpapp/UDPBasicBurst2.o: applications/udpapp/UDPBasicBurst2.cc \
	applications/udpapp/UDPAppBase.h \
	applications/udpapp/UDPBasicBurst2.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
	applications/udpapp/UDPAppBase.h \
	applications/udpapp/UDPBasicApp.h \
	applications/udpapp/UDPEchoApp.h \
	applications/udpapp/UDPEchoAppMsg_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h
$O/applications/udpapp/UDPEchoAppMsg_m.o: applications/udpapp/UDPEchoAppMsg_m.cc \
	applications/udpapp/UDPEchoAppMsg_m.h \
	base/INETDefs.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
	applications/udpapp/UDPAppBase.h \
	applications/udpapp/UDPSink.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
	applications/udpapp/UDPAppBase.h \
	applications/udpapp/UDPVideoStreamCli.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
	applications/udpapp/UDPAppBase.h \
	applications/udpapp/UDPVideoStreamSvr.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
	base/AbstractQueue.h \
	base/INETDefs.h
$O/base/BasicModule.o: base/BasicModule.cc \
	base/BasicModule.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h
$O/base/Blackboard.o: base/Blackboard.cc \
	base/Blackboard.h \
	base/INETDefs.h \
	base/ModuleAccess.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/INETDefs.h
$O/base/ByteArrayMessage_m.o: base/ByteArrayMessage_m.cc \
	base/ByteArrayMessage_m.h \
	base/INETDefs.h
$O/base/Join.o: base/Join.cc \
	base/INETDefs.h
$O/base/MMapBoard.o: base/MMapBoard.cc \
	base/INETDefs.h \
	base/MMapBoard.h \
	base/ModuleAccess.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
	base/INETDefs.h \
	base/ModuleAccess.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
	base/INETDefs.h \
	base/NotifierConsts.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
	base/INETDefs.h \
	base/ProtocolMap.h
$O/base/QueueBase.o: base/QueueBase.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/QueueBase.h
$O/base/QueueWithQoS.o: base/QueueWithQoS.cc \
	base/AbstractQueue.h \
	base/EnqueueHook.h \
	base/INETDefs.h \
	base/QueueWithQoS.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
	base/INETDefs.h \
	base/ReassemblyBuffer.h
$O/base/Sink.o: base/Sink.cc \
	base/INETDefs.h \
	base/Sink.h
$O/battery/BasicBattery.o: battery/BasicBattery.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/BasicBattery.h
$O/battery/InetSimpleBattery.o: battery/InetSimpleBattery.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/BasicBattery.h \
	battery/Energy.h \
	battery/InetSimpleBattery.h \
	linklayer/contract/RadioState.h
$O/experimental/linklayer/ieee80211/hwmp/hwmp-rtable.o: experimental/linklayer/ieee80211/hwmp/hwmp-rtable.cc \
	base/INETDefs.h \
	experimental/linklayer/ieee80211/hwmp/hwmp-rtable.h \
	linklayer/contract/MACAddress.h
$O/experimental/linklayer/ieee80211/hwmp/hwmp.o: experimental/linklayer/ieee80211/hwmp/hwmp.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	experimental/linklayer/ieee80211/hwmp/hwmp-rtable.h \
	experimental/linklayer/ieee80211/hwmp/hwmp.h \
	experimental/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	experimental/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/Radio80211aControlInfo_m.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/mfcore/ModulationType.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/experimental/linklayer/ieee80211/mgmt/ETXPacket_m.o: experimental/linklayer/ieee80211/mgmt/ETXPacket_m.cc \
	base/INETDefs.h \
	experimental/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/contract/MACAddress.h
$O/experimental/linklayer/ieee80211/mgmt/Ieee80211Etx.o: experimental/linklayer/ieee80211/mgmt/Ieee80211Etx.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	experimental/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	experimental/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/Radio80211aControlInfo_m.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/mfcore/ModulationType.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/manetrouting/base/uint128.h
$O/experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.o: experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	experimental/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	experimental/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.h \
	experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.h \
	experimental/linklayer/ieee80211/mgmt/lwmpls_data.h \
	linklayer/contract/ControlInfoBreakLink_m.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/MeshControlInfo_m.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	networklayer/mpls/MPLSPacket.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/queue/IQoSClassifier.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/TED_m.h
$O/experimental/linklayer/ieee80211/mgmt/Ieee80211MeshLwmpls.o: experimental/linklayer/ieee80211/mgmt/Ieee80211MeshLwmpls.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	experimental/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	experimental/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.h \
	experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.h \
	experimental/linklayer/ieee80211/mgmt/lwmpls_data.h \
	linklayer/contract/ControlInfoBreakLink_m.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/MeshControlInfo_m.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	networklayer/mpls/MPLSPacket.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/queue/IQoSClassifier.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/TED_m.h
$O/experimental/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o: experimental/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	experimental/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	experimental/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	experimental/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/queue/IQoSClassifier.h
$O/experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.o: experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.cc \
	base/INETDefs.h \
	experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.h \
	linklayer/contract/MACAddress.h
$O/experimental/linklayer/ieee80211/mgmt/lwmpls_data.o: experimental/linklayer/ieee80211/mgmt/lwmpls_data.cc \
	experimental/linklayer/ieee80211/mgmt/lwmpls_data.h
$O/linklayer/contract/ControlInfoBreakLink_m.o: linklayer/contract/ControlInfoBreakLink_m.cc \
	base/INETDefs.h \
	linklayer/contract/ControlInfoBreakLink_m.h \
	linklayer/contract/MACAddress.h
$O/linklayer/contract/Ieee802Ctrl_m.o: linklayer/contract/Ieee802Ctrl_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/contract/MeshControlInfo_m.o: linklayer/contract/MeshControlInfo_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/MeshControlInfo_m.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/manetrouting/base/uint128.h
$O/linklayer/contract/PhyControlInfo_m.o: linklayer/contract/PhyControlInfo_m.cc \
	base/INETDefs.h \
	linklayer/contract/PhyControlInfo_m.h
$O/linklayer/contract/Radio80211aControlInfo_m.o: linklayer/contract/Radio80211aControlInfo_m.cc \
	linklayer/contract/Radio80211aControlInfo_m.h \
	linklayer/mfcore/ModulationType.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherBus.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/TxNotifDetails.h \
	linklayer/ethernet/EtherEncap.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMAC.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h
$O/linklayer/ethernet/EtherFrame_m.o: linklayer/ethernet/EtherFrame_m.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherHub.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherLLC.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/TxNotifDetails.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMAC.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h
$O/linklayer/ethernet/EtherMAC2.o: linklayer/ethernet/EtherMAC2.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/TxNotifDetails.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMAC2.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/TxNotifDetails.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h
$O/linklayer/etherswitch/MACRelayUnitBase.o: linklayer/etherswitch/MACRelayUnitBase.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/etherswitch/MACRelayUnitBase.h
$O/linklayer/etherswitch/MACRelayUnitNP.o: linklayer/etherswitch/MACRelayUnitNP.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/etherswitch/MACRelayUnitBase.h \
	linklayer/etherswitch/MACRelayUnitNP.h
$O/linklayer/etherswitch/MACRelayUnitPP.o: linklayer/etherswitch/MACRelayUnitPP.cc \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/etherswitch/MACRelayUnitBase.h \
	linklayer/etherswitch/MACRelayUnitPP.h
$O/linklayer/ext/ExtFrame_m.o: linklayer/ext/ExtFrame_m.cc \
	linklayer/ext/ExtFrame_m.h
$O/linklayer/ext/ExtInterface.o: linklayer/ext/ExtInterface.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ext/ExtFrame_m.h \
	linklayer/ext/ExtInterface.h \
	linklayer/ext/cSocketRTScheduler.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	util/headerserializers/IPSerializer.h \
	util/headerserializers/headers/bsdint.h
$O/linklayer/ext/cSocketRTScheduler.o: linklayer/ext/cSocketRTScheduler.cc \
	base/INETDefs.h \
	linklayer/ext/ExtFrame_m.h \
	linklayer/ext/cSocketRTScheduler.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/ethernet.h
$O/linklayer/ieee80211/mac/BlockAckCache.o: linklayer/ieee80211/mac/BlockAckCache.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/BlockAckCache.h \
	linklayer/ieee80211/mac/BlockAckFrame.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/BlockAckFrame.o: linklayer/ieee80211/mac/BlockAckFrame.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/BlockAckFrame.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/FrameBlock.o: linklayer/ieee80211/mac/FrameBlock.cc \
	linklayer/ieee80211/mac/FrameBlock.h
$O/linklayer/ieee80211/mac/Ieee80211Frame_m.o: linklayer/ieee80211/mac/Ieee80211Frame_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
	base/FSMA.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211Mac.h \
	linklayer/mfcore/WirelessMacBase.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/ieee80211/mac/Ieee80211NewMac.o: linklayer/ieee80211/mac/Ieee80211NewMac.cc \
	base/Coord.h \
	base/FSMA.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/Radio80211aControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211NewMac.h \
	linklayer/ieee80211/mgmt/Ieee80211eClassifier.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/WirelessMacBase.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	linklayer/radio/errormodel/WifiMode.h \
	linklayer/radio/errormodel/WifiPreambleType.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/queue/IQoSClassifier.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/linklayer/ieee80211/mac/Ieee80211aMac.o: linklayer/ieee80211/mac/Ieee80211aMac.cc \
	base/Coord.h \
	base/FSMA.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/Radio80211aControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211aConsts.h \
	linklayer/ieee80211/mac/Ieee80211aMac.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/WirelessMacBase.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	util/FWMath.h
$O/linklayer/ieee80211/mac/Ieee80211eMac.o: linklayer/ieee80211/mac/Ieee80211eMac.cc \
	base/FSMA.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211eMac.h \
	linklayer/mfcore/WirelessMacBase.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/linklayer/ieee80211/mac/Ieee80211egMac.o: linklayer/ieee80211/mac/Ieee80211egMac.cc \
	base/FSMA.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211egMac.h \
	linklayer/mfcore/WirelessMacBase.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/linklayer/ieee80211/mac/Ieee80211gMac.o: linklayer/ieee80211/mac/Ieee80211gMac.cc \
	base/Coord.h \
	base/FSMA.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/Radio80211aControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211gMac.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/WirelessMacBase.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	util/FWMath.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/RadioState.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IP.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/queue/IQoSClassifier.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/queue/IQoSClassifier.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/queue/IQoSClassifier.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/queue/IQoSClassifier.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/queue/IQoSClassifier.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o: linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/queue/IQoSClassifier.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/queue/IQoSClassifier.h
$O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o: linklayer/ieee80211/mgmt/Ieee80211Primitives_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211eClassifier.o: linklayer/ieee80211/mgmt/Ieee80211eClassifier.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mgmt/Ieee80211eClassifier.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/queue/IQoSClassifier.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/udp/UDPPacket_m.h
$O/linklayer/mf80211/macLayer/CSMAMacLayer.o: linklayer/mf80211/macLayer/CSMAMacLayer.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/RadioState.h \
	linklayer/mf80211/macLayer/CSMAMacLayer.h \
	linklayer/mf80211/macLayer/MacPkt_m.h \
	linklayer/mfcore/WirelessMacBase.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/mf80211/macLayer/Mac80211.o: linklayer/mf80211/macLayer/Mac80211.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/RadioState.h \
	linklayer/mf80211/macLayer/Consts80211.h \
	linklayer/mf80211/macLayer/Mac80211.h \
	linklayer/mf80211/macLayer/Mac80211Pkt_m.h \
	linklayer/mf80211/macLayer/MacPkt_m.h \
	linklayer/mfcore/WirelessMacBase.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/mf80211/macLayer/Mac80211Pkt_m.o: linklayer/mf80211/macLayer/Mac80211Pkt_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/mf80211/macLayer/Mac80211Pkt_m.h \
	linklayer/mf80211/macLayer/MacPkt_m.h
$O/linklayer/mf80211/macLayer/MacPkt_m.o: linklayer/mf80211/macLayer/MacPkt_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/mf80211/macLayer/MacPkt_m.h
$O/linklayer/mf80211/phyLayer/decider/Decider80211.o: linklayer/mf80211/phyLayer/decider/Decider80211.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mf80211/macLayer/Consts80211.h \
	linklayer/mf80211/phyLayer/decider/Decider80211.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/BasicDecider.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	util/FWMath.h
$O/linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.o: linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.h \
	linklayer/mf80211/phyLayer/decider/SnrDecider.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/BasicDecider.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	util/FWMath.h
$O/linklayer/mf80211/phyLayer/decider/SnrDecider.o: linklayer/mf80211/phyLayer/decider/SnrDecider.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mf80211/phyLayer/decider/SnrDecider.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/BasicDecider.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	util/FWMath.h
$O/linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.o: linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.h \
	linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/BasicSnrEval.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h
$O/linklayer/mf80211/phyLayer/snrEval/SnrEval.o: linklayer/mf80211/phyLayer/snrEval/SnrEval.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/BasicSnrEval.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h
$O/linklayer/mf80211/phyLayer/snrEval/SnrEval80211.o: linklayer/mf80211/phyLayer/snrEval/SnrEval80211.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/mf80211/macLayer/Consts80211.h \
	linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
	linklayer/mf80211/phyLayer/snrEval/SnrEval80211.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/BasicSnrEval.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h
$O/linklayer/mfcore/AirFrame_m.o: linklayer/mfcore/AirFrame_m.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	util/FWMath.h
$O/linklayer/mfcore/BasicDecider.o: linklayer/mfcore/BasicDecider.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/BasicDecider.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	util/FWMath.h
$O/linklayer/mfcore/BasicSnrEval.o: linklayer/mfcore/BasicSnrEval.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/BasicSnrEval.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h \
	linklayer/mfcore/TransmComplete_m.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h
$O/linklayer/mfcore/SnrControlInfo_m.o: linklayer/mfcore/SnrControlInfo_m.cc \
	base/INETDefs.h \
	linklayer/mfcore/SnrControlInfo_m.h \
	linklayer/mfcore/SnrList.h
$O/linklayer/mfcore/TransmComplete_m.o: linklayer/mfcore/TransmComplete_m.cc \
	base/INETDefs.h \
	linklayer/mfcore/TransmComplete_m.h
$O/linklayer/mfcore/WirelessMacBase.o: linklayer/mfcore/WirelessMacBase.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/WirelessMacBase.h
$O/linklayer/ppp/DropsGenerator.o: linklayer/ppp/DropsGenerator.cc \
	base/INETDefs.h \
	linklayer/ppp/DropsGenerator.h
$O/linklayer/ppp/DuplicatesGenerator.o: linklayer/ppp/DuplicatesGenerator.cc \
	base/INETDefs.h \
	linklayer/ppp/DuplicatesGenerator.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/TxNotifDetails.h \
	linklayer/ppp/PPP.h \
	linklayer/ppp/PPPFrame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h
$O/linklayer/ppp/PPPFrame_m.o: linklayer/ppp/PPPFrame_m.cc \
	base/INETDefs.h \
	linklayer/ppp/PPPFrame_m.h
$O/linklayer/ppp/ThruputMeter.o: linklayer/ppp/ThruputMeter.cc \
	base/INETDefs.h \
	linklayer/ppp/ThruputMeter.h
$O/linklayer/radio/AbstractRadio.o: linklayer/radio/AbstractRadio.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/BasicBattery.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/Radio80211aControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/AbstractRadio.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelControl.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/linklayer/radio/AbstractRadioExtended.o: linklayer/radio/AbstractRadioExtended.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/BasicBattery.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/Radio80211aControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/AbstractRadioExtended.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	util/FWMath.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/linklayer/radio/BerParseFile.o: linklayer/radio/BerParseFile.cc \
	linklayer/radio/BerParseFile.h
$O/linklayer/radio/GenericRadio.o: linklayer/radio/GenericRadio.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/RadioState.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/AbstractRadio.h \
	linklayer/radio/GenericRadio.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/IReceptionModel.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelControl.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/GenericRadioModel.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/Modulation.h \
	util/FWMath.h
$O/linklayer/radio/Ieee80211NewRadio.o: linklayer/radio/Ieee80211NewRadio.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/RadioState.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/AbstractRadio.h \
	linklayer/radio/AbstractRadioExtended.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/Ieee80211NewRadio.h \
	util/FWMath.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/linklayer/radio/Ieee80211NewRadioModel.o: linklayer/radio/Ieee80211NewRadioModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/BerParseFile.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/Ieee80211NewRadioModel.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	linklayer/radio/errormodel/WifiMode.h \
	linklayer/radio/errormodel/WifiPreambleType.h \
	linklayer/radio/errormodel/dsss-error-rate-model.h \
	linklayer/radio/errormodel/yans-error-rate-model.h \
	util/FWMath.h
$O/linklayer/radio/Ieee80211Radio.o: linklayer/radio/Ieee80211Radio.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/RadioState.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/AbstractRadio.h \
	linklayer/radio/AbstractRadioExtended.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/Ieee80211Radio.h \
	util/FWMath.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/linklayer/radio/Ieee80211RadioModel.o: linklayer/radio/Ieee80211RadioModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/BerParseFile.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/Ieee80211RadioModel.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	util/FWMath.h
$O/linklayer/radio/Ieee80211aRadio.o: linklayer/radio/Ieee80211aRadio.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/RadioState.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/AbstractRadio.h \
	linklayer/radio/AbstractRadioExtended.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/Ieee80211aRadio.h \
	util/FWMath.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/linklayer/radio/Ieee80211aRadioModel.o: linklayer/radio/Ieee80211aRadioModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211aConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/BerParseFile.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/Ieee80211aRadioModel.h \
	linklayer/radio/Modulation.h \
	linklayer/radio/bpskMode.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	linklayer/radio/qamMode.h \
	linklayer/radio/transmissionMode.h \
	util/FWMath.h
$O/linklayer/radio/Ieee80211gRadio.o: linklayer/radio/Ieee80211gRadio.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPowerControl.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/RadioState.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/AbstractRadio.h \
	linklayer/radio/AbstractRadioExtended.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/Ieee80211gRadio.h \
	util/FWMath.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/linklayer/radio/Ieee80211gRadioModel.o: linklayer/radio/Ieee80211gRadioModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/BerParseFile.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/Ieee80211gRadioModel.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	util/FWMath.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
	base/INETDefs.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/Modulation.h
$O/linklayer/radio/PathLossReceptionModel.o: linklayer/radio/PathLossReceptionModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/PathLossReceptionModel.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/linklayer/radio/TwoRayModel.o: linklayer/radio/TwoRayModel.cc \
	base/INETDefs.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/TwoRayModel.h \
	util/FWMath.h
$O/linklayer/radio/bpskMode.o: linklayer/radio/bpskMode.cc \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/bpskMode.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	linklayer/radio/qamMode.h \
	linklayer/radio/transmissionMode.h
$O/linklayer/radio/qamMode.o: linklayer/radio/qamMode.cc \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	linklayer/radio/qamMode.h \
	linklayer/radio/transmissionMode.h
$O/linklayer/radio/transmissionMode.o: linklayer/radio/transmissionMode.cc \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	linklayer/radio/transmissionMode.h
$O/linklayer/radio/errormodel/WifiMode.o: linklayer/radio/errormodel/WifiMode.cc \
	linklayer/mfcore/ModulationType.h \
	linklayer/radio/errormodel/Ieee80211DataRate.h \
	linklayer/radio/errormodel/WifiMode.h \
	linklayer/radio/errormodel/WifiPreambleType.h
$O/linklayer/radio/errormodel/dsss-error-rate-model.o: linklayer/radio/errormodel/dsss-error-rate-model.cc \
	linklayer/radio/errormodel/dsss-error-rate-model.h
$O/linklayer/radio/errormodel/yans-error-rate-model.o: linklayer/radio/errormodel/yans-error-rate-model.cc \
	linklayer/mfcore/ModulationType.h \
	linklayer/radio/errormodel/WifiMode.h \
	linklayer/radio/errormodel/WifiPreambleType.h \
	linklayer/radio/errormodel/dsss-error-rate-model.h \
	linklayer/radio/errormodel/yans-error-rate-model.h
$O/linklayer/radio/propagation/FreeSpaceModel.o: linklayer/radio/propagation/FreeSpaceModel.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelControl.h
$O/linklayer/radio/propagation/LogNormalShadowingModel.o: linklayer/radio/propagation/LogNormalShadowingModel.cc \
	base/INETDefs.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/LogNormalShadowingModel.h
$O/linklayer/radio/propagation/NakagamiModel.o: linklayer/radio/propagation/NakagamiModel.cc \
	base/INETDefs.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/NakagamiModel.h
$O/linklayer/radio/propagation/RayleighModel.o: linklayer/radio/propagation/RayleighModel.cc \
	base/INETDefs.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/RayleighModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/RiceModel.o: linklayer/radio/propagation/RiceModel.cc \
	base/INETDefs.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/RiceModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/TwoRayGroundModel.o: linklayer/radio/propagation/TwoRayGroundModel.cc \
	base/INETDefs.h \
	linklayer/radio/IReceptionModel.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/TwoRayGroundModel.h
$O/mobility/ANSimMobility.o: mobility/ANSimMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/ANSimMobility.h \
	mobility/BasicMobility.h \
	mobility/LineSegmentsMobilityBase.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/BasicMobility.o: mobility/BasicMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/BonnMotionFileCache.o: mobility/BonnMotionFileCache.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/BonnMotionFileCache.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/BonnMotionMobility.o: mobility/BonnMotionMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/BonnMotionFileCache.h \
	mobility/BonnMotionMobility.h \
	mobility/LineSegmentsMobilityBase.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/ChiangMobility.o: mobility/ChiangMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/ChiangMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/CircleMobility.o: mobility/CircleMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/CircleMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/ConstSpeedMobility.o: mobility/ConstSpeedMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/ConstSpeedMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/GaussMarkovMobility.o: mobility/GaussMarkovMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/GaussMarkovMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/LineSegmentsMobilityBase.o: mobility/LineSegmentsMobilityBase.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/LineSegmentsMobilityBase.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/LinearMobility.o: mobility/LinearMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/LinearMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/MassMobility.o: mobility/MassMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/MassMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/Ns2MotionMobility.o: mobility/Ns2MotionMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/LineSegmentsMobilityBase.h \
	mobility/Ns2MotionMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/NullMobility.o: mobility/NullMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/NullMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/RandomWPMobility.o: mobility/RandomWPMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/LineSegmentsMobilityBase.h \
	mobility/RandomWPMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/RandomWPMobilityTrace.o: mobility/RandomWPMobilityTrace.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/LineSegmentsMobilityBase.h \
	mobility/RandomWPMobility.h \
	mobility/RandomWPMobilityTrace.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/RectangleMobility.o: mobility/RectangleMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/RectangleMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/RestrictedConstSpeedMobility.o: mobility/RestrictedConstSpeedMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/ConstSpeedMobility.h \
	mobility/RestrictedConstSpeedMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/RestrictedLinearMobility.o: mobility/RestrictedLinearMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/LinearMobility.h \
	mobility/RestrictedLinearMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/RestrictedRandomWPMobility.o: mobility/RestrictedRandomWPMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/LineSegmentsMobilityBase.h \
	mobility/RandomWPMobility.h \
	mobility/RestrictedRandomWPMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/StaticGridMobility.o: mobility/StaticGridMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/StaticGridMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/TurtleMobility.o: mobility/TurtleMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/LineSegmentsMobilityBase.h \
	mobility/TurtleMobility.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/mobility/traci/TraCIMobility.o: mobility/traci/TraCIMobility.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/traci/TraCIMobility.h \
	util/FWMath.h \
	world/ChannelControl.h \
	world/traci/TraCIScenarioManager.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/arp/ARPPacket_m.o: networklayer/arp/ARPPacket_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/contract/IPAddress.h
$O/networklayer/autorouting/FlatNetworkConfigurator.o: networklayer/autorouting/FlatNetworkConfigurator.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/FlatNetworkConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/autorouting/FlatNetworkConfigurator6.o: networklayer/autorouting/FlatNetworkConfigurator6.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/FlatNetworkConfigurator6.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h
$O/networklayer/autorouting/HostAutoConfigurator.o: networklayer/autorouting/HostAutoConfigurator.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/HostAutoConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/autorouting/HostAutoConfigurator2.o: networklayer/autorouting/HostAutoConfigurator2.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/HostAutoConfigurator2.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/autorouting/NetworkConfigurator.o: networklayer/autorouting/NetworkConfigurator.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/NetworkConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h
$O/networklayer/contract/IPAddress.o: networklayer/contract/IPAddress.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h
$O/networklayer/contract/IPAddressResolver.o: networklayer/contract/IPAddressResolver.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h
$O/networklayer/contract/IPControlInfo.o: networklayer/contract/IPControlInfo.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h
$O/networklayer/contract/IPControlInfo_m.o: networklayer/contract/IPControlInfo_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h
$O/networklayer/contract/IPProtocolId_m.o: networklayer/contract/IPProtocolId_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
	base/INETDefs.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/contract/IPv6ControlInfo_m.o: networklayer/contract/IPv6ControlInfo_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo_m.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/networklayer/extras/Dummy.o: networklayer/extras/Dummy.cc
$O/networklayer/extras/FailureManager.o: networklayer/extras/FailureManager.cc \
	base/INETDefs.h \
	base/IScriptable.h \
	networklayer/extras/FailureManager.h
$O/networklayer/extras/NetworkInfo.o: networklayer/extras/NetworkInfo.cc \
	base/INETDefs.h \
	base/IScriptable.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/extras/NetworkInfo.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h
$O/networklayer/icmpv6/ICMPv6Message_m.o: networklayer/icmpv6/ICMPv6Message_m.cc \
	base/INETDefs.h \
	networklayer/icmpv6/ICMPv6Message_m.h
$O/networklayer/icmpv6/IPv6NDMessage_m.o: networklayer/icmpv6/IPv6NDMessage_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/IPv6NeighbourCache.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h
$O/networklayer/ipv4/ControlManetRouting_m.o: networklayer/ipv4/ControlManetRouting_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/ErrorHandling.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/ipv4/ICMPMessage_m.o: networklayer/ipv4/ICMPMessage_m.cc \
	base/INETDefs.h \
	networklayer/ipv4/ICMPMessage_m.h
$O/networklayer/ipv4/IP.o: networklayer/ipv4/IP.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IP.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/uint128.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/ipv4/IPDatagram_m.o: networklayer/ipv4/IPDatagram_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPDatagram_m.h
$O/networklayer/ipv4/IPFragBuf.o: networklayer/ipv4/IPFragBuf.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/ReassemblyBuffer.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/ipv4/IPRoute.o: networklayer/ipv4/IPRoute.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPRoute.h
$O/networklayer/ipv4/IPRouteRule.o: networklayer/ipv4/IPRouteRule.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRouteRule.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableParser.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableParser.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	networklayer/ipv6/IPv6.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6FragBuf.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6Datagram_m.o: networklayer/ipv6/IPv6Datagram_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ErrorHandling.h
$O/networklayer/ipv6/IPv6ExtensionHeaders_m.o: networklayer/ipv6/IPv6ExtensionHeaders_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/ipv6/IPv6FragBuf.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	util/opp_utils.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ldp/LDP.h \
	networklayer/ldp/LDPPacket_m.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ted/TED.h \
	networklayer/ted/TEDAccess.h \
	networklayer/ted/TED_m.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/ldp/LDPPacket_m.o: networklayer/ldp/LDPPacket_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/ldp/LDPPacket_m.h
$O/networklayer/manetrouting/aodv/aodv_msg_struct.o: networklayer/manetrouting/aodv/aodv_msg_struct.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/manetrouting/aodv/aodv_uu_omnet.o: networklayer/manetrouting/aodv/aodv_uu_omnet.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/manetrouting/aodv/packet_queue_omnet.o: networklayer/manetrouting/aodv/packet_queue_omnet.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv/aodv-uu/aodv_hello.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv/aodv-uu/aodv_socket.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/debug_aodv.o: networklayer/manetrouting/aodv/aodv-uu/debug_aodv.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/list.o: networklayer/manetrouting/aodv/aodv-uu/list.cc \
	networklayer/manetrouting/aodv/aodv-uu/list.h
$O/networklayer/manetrouting/aodv/aodv-uu/locality.o: networklayer/manetrouting/aodv/aodv-uu/locality.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o: networklayer/manetrouting/aodv/aodv-uu/routing_table.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o: networklayer/manetrouting/aodv/aodv-uu/seek_list.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.o: networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv/aodv-uu/list.h \
	networklayer/manetrouting/aodv/aodv-uu/locality.h \
	networklayer/manetrouting/aodv/aodv-uu/params.h \
	networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv/aodv_msg_struct.h \
	networklayer/manetrouting/aodv/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/ControlInfoBreakLink_m.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/networklayer/manetrouting/base/int128.o: networklayer/manetrouting/base/int128.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/manetrouting/base/int128.h
$O/networklayer/manetrouting/base/uint128.o: networklayer/manetrouting/base/uint128.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/manetrouting/base/uint128.h
$O/networklayer/manetrouting/batman/BatmanData.o: networklayer/manetrouting/batman/BatmanData.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/batman/BatmanData.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batman.h
$O/networklayer/manetrouting/batman/BatmanMain.o: networklayer/manetrouting/batman/BatmanMain.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/batman/BatmanData.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batman.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/manetrouting/batman/BatmanMsg_m.o: networklayer/manetrouting/batman/BatmanMsg_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h
$O/networklayer/manetrouting/batman/batmanHna.o: networklayer/manetrouting/batman/batmanHna.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/batman/BatmanData.h \
	networklayer/manetrouting/batman/BatmanMsg_m.h \
	networklayer/manetrouting/batman/batman.h
$O/networklayer/manetrouting/dsdv/DSDV_2.o: networklayer/manetrouting/dsdv/DSDV_2.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/dsdv/DSDV_2.h \
	networklayer/manetrouting/dsdv/DSDVhello_m.h
$O/networklayer/manetrouting/dsdv/DSDVhello_m.o: networklayer/manetrouting/dsdv/DSDVhello_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/manetrouting/dsdv/DSDVhello_m.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ControlManetRouting.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/MeshControlInfo_m.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IP.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo_fau/DYMO.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IP.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	networklayer/contract/IPAddress.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o: networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o: networklayer/manetrouting/dymo_fau/DYMO_Packet_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o: networklayer/manetrouting/dymo_fau/DYMO_RERR_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o: networklayer/manetrouting/dymo_fau/DYMO_RM_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o: networklayer/manetrouting/dymo_fau/DYMO_RREP_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o: networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IP.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo_fau/DYMO.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IP.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo_fau/DYMO.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o: networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
	base/AbstractQueue.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IP.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPFragBuf.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o: networklayer/manetrouting/dymo_fau/DYMO_UERR_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/manager/ManetManager.o: networklayer/manetrouting/manager/ManetManager.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/ControlManetRouting_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/manager/ManetManager.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/manetrouting/olsr/OLSRpkt_m.o: networklayer/manetrouting/olsr/OLSRpkt_m.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/manetrouting/base/uint128.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/LIBTable.h \
	util/XMLUtils.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ldp/LDP.h \
	networklayer/ldp/LDPPacket_m.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/mpls/MPLS.h \
	networklayer/mpls/MPLSPacket.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/Utils.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
	base/INETDefs.h \
	networklayer/mpls/MPLSPacket.h
$O/networklayer/ospfv2/OSPFPacket_m.o: networklayer/ospfv2/OSPFPacket_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/OSPFPacket_m.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFRouting.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/OSPFTimer_m.o: networklayer/ospfv2/OSPFTimer_m.cc \
	base/INETDefs.h \
	networklayer/ospfv2/OSPFTimer_m.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer_m.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/queue/BasicDSCPClassifier.o: networklayer/queue/BasicDSCPClassifier.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/queue/BasicDSCPClassifier.h \
	networklayer/queue/IQoSClassifier.h
$O/networklayer/queue/DropTailQoSQueue.o: networklayer/queue/DropTailQoSQueue.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	networklayer/queue/DropTailQoSQueue.h \
	networklayer/queue/IQoSClassifier.h
$O/networklayer/queue/DropTailQueue.o: networklayer/queue/DropTailQueue.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	networklayer/queue/DropTailQueue.h
$O/networklayer/queue/REDQueue.o: networklayer/queue/REDQueue.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	networklayer/queue/REDQueue.h
$O/networklayer/queue/WeightedFairQueue.o: networklayer/queue/WeightedFairQueue.cc \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	networklayer/queue/IQoSClassifier.h \
	networklayer/queue/WeightedFairQueue.h
$O/networklayer/rsvp_te/IntServ_m.o: networklayer/rsvp_te/IntServ_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ_m.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IScriptable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/rsvp_te/IRSVPClassifier.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVP.h \
	networklayer/rsvp_te/RSVPHelloMsg.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h \
	networklayer/rsvp_te/RSVPResvMsg.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h \
	networklayer/rsvp_te/Utils.h \
	networklayer/ted/TED.h \
	networklayer/ted/TEDAccess.h \
	networklayer/ted/TED_m.h \
	util/XMLUtils.h \
	util/common.h
$O/networklayer/rsvp_te/RSVPHello_m.o: networklayer/rsvp_te/RSVPHello_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h
$O/networklayer/rsvp_te/RSVPPacket_m.o: networklayer/rsvp_te/RSVPPacket_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket_m.h
$O/networklayer/rsvp_te/RSVPPathMsg_m.o: networklayer/rsvp_te/RSVPPathMsg_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h
$O/networklayer/rsvp_te/RSVPResvMsg_m.o: networklayer/rsvp_te/RSVPResvMsg_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h
$O/networklayer/rsvp_te/SignallingMsg_m.o: networklayer/rsvp_te/SignallingMsg_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IScriptable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/rsvp_te/IRSVPClassifier.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVP.h \
	networklayer/rsvp_te/RSVPAccess.h \
	networklayer/rsvp_te/RSVPHelloMsg.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h \
	networklayer/rsvp_te/RSVPResvMsg.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h \
	networklayer/rsvp_te/SimpleClassifier.h \
	util/XMLUtils.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/Utils.h
$O/networklayer/ted/LinkStatePacket_m.o: networklayer/ted/LinkStatePacket_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/TED_m.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/LinkStateRouting.h \
	networklayer/ted/TED.h \
	networklayer/ted/TEDAccess.h \
	networklayer/ted/TED_m.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ted/TED.h \
	networklayer/ted/TED_m.h
$O/networklayer/ted/TED_m.o: networklayer/ted/TED_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/ted/TED_m.h
$O/transport/contract/SCTPCommand_m.o: transport/contract/SCTPCommand_m.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/contract/TCPCommand_m.o: transport/contract/TCPCommand_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h
$O/transport/contract/UDPControlInfo_m.o: transport/contract/UDPControlInfo_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/rtp/RTCP.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTPReceiverInfo.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderInfo.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/reports.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/reports.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/rtp/RTP.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPInterfacePacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPProfile.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPInterfacePacket.o: transport/rtp/RTPInterfacePacket.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTPInterfacePacket.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
	base/INETDefs.h \
	transport/rtp/RTPPacket.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/reports.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPayloadReceiver.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPayloadSender.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTPPayloadReceiver.h \
	transport/rtp/RTPPayloadSender.h \
	transport/rtp/RTPProfile.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/reports.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTPReceiverInfo.h \
	transport/rtp/reports.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTPSenderControlMessage_m.o: transport/rtp/RTPSenderControlMessage_m.cc \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTPSenderInfo.h \
	transport/rtp/reports.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTPSenderStatusMessage_m.o: transport/rtp/RTPSenderStatusMessage_m.cc \
	base/INETDefs.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/reports.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
	base/INETDefs.h \
	transport/rtp/sdes.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPProfile.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/profiles/avprofile/RTPAVProfile.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
	base/INETDefs.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPayloadReceiver.h \
	transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
	transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPayloadSender.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
	transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o: transport/rtp/profiles/avprofile/RTPMpegPacket_m.cc \
	base/INETDefs.h \
	transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/transport/sctp/SCTP.o: transport/sctp/SCTP.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPAlg.o: transport/sctp/SCTPAlg.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlg.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPAssociationBase.o: transport/sctp/SCTPAssociationBase.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPAssociationEventProc.o: transport/sctp/SCTPAssociationEventProc.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPAssociationRcvMessage.o: transport/sctp/SCTPAssociationRcvMessage.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPAssociationSendAll.o: transport/sctp/SCTPAssociationSendAll.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPAssociationUtil.o: transport/sctp/SCTPAssociationUtil.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPCCFunctions.o: transport/sctp/SCTPCCFunctions.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPMessage.o: transport/sctp/SCTPMessage.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPMessage_m.o: transport/sctp/SCTPMessage_m.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPQueue.o: transport/sctp/SCTPQueue.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPReceiveStream.o: transport/sctp/SCTPReceiveStream.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPSSFunctions.o: transport/sctp/SCTPSSFunctions.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPSendStream.o: transport/sctp/SCTPSendStream.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv4/ICMPMessage_m.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSendQueue.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSendQueue.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSendQueue.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSendQueue.h
$O/transport/tcp/TCPSACKRexmitQueue.o: transport/tcp/TCPSACKRexmitQueue.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h
$O/transport/tcp/TCPSegment.o: transport/tcp/TCPSegment.cc \
	base/INETDefs.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h
$O/transport/tcp/TCPSegment_m.o: transport/tcp/TCPSegment_m.cc \
	base/INETDefs.h \
	transport/tcp/TCPSegment_m.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/DumbTCP.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h
$O/transport/tcp/flavours/TCPNewReno.o: transport/tcp/flavours/TCPNewReno.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPNewReno.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPNoCongestionControl.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPReno.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPTahoe.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPMsgBasedSendQueue.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPVirtualDataSendQueue.h
$O/transport/tcp_nsc/TCP_NSC.o: transport/tcp_nsc/TCP_NSC.cc
$O/transport/tcp_nsc/TCP_NSC_Connection.o: transport/tcp_nsc/TCP_NSC_Connection.cc
$O/transport/tcp_nsc/queues/TCP_NSC_VirtualDataQueues.o: transport/tcp_nsc/queues/TCP_NSC_VirtualDataQueues.cc
$O/transport/tcp_old/TCP.o: transport/tcp_old/TCP.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv4/ICMPMessage_m.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCP_old.h
$O/transport/tcp_old/TCPConnectionBase.o: transport/tcp_old/TCPConnectionBase.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCPReceiveQueue_old.h \
	transport/tcp_old/TCPSendQueue_old.h \
	transport/tcp_old/TCP_old.h
$O/transport/tcp_old/TCPConnectionEventProc.o: transport/tcp_old/TCPConnectionEventProc.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCPReceiveQueue_old.h \
	transport/tcp_old/TCPSendQueue_old.h \
	transport/tcp_old/TCP_old.h
$O/transport/tcp_old/TCPConnectionRcvSegment.o: transport/tcp_old/TCPConnectionRcvSegment.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCPReceiveQueue_old.h \
	transport/tcp_old/TCPSendQueue_old.h \
	transport/tcp_old/TCP_old.h
$O/transport/tcp_old/TCPConnectionUtil.o: transport/tcp_old/TCPConnectionUtil.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCPReceiveQueue_old.h \
	transport/tcp_old/TCPSendQueue_old.h \
	transport/tcp_old/TCP_old.h
$O/transport/tcp_old/flavours/DumbTCP.o: transport/tcp_old/flavours/DumbTCP.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/flavours/DumbTCP_old.h
$O/transport/tcp_old/flavours/TCPBaseAlg.o: transport/tcp_old/flavours/TCPBaseAlg.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/flavours/TCPBaseAlg_old.h
$O/transport/tcp_old/flavours/TCPNoCongestionControl.o: transport/tcp_old/flavours/TCPNoCongestionControl.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/flavours/TCPBaseAlg_old.h \
	transport/tcp_old/flavours/TCPNoCongestionControl_old.h
$O/transport/tcp_old/flavours/TCPReno.o: transport/tcp_old/flavours/TCPReno.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/flavours/TCPBaseAlg_old.h \
	transport/tcp_old/flavours/TCPReno_old.h \
	transport/tcp_old/flavours/TCPTahoeRenoFamily_old.h
$O/transport/tcp_old/flavours/TCPTahoe.o: transport/tcp_old/flavours/TCPTahoe.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/flavours/TCPBaseAlg_old.h \
	transport/tcp_old/flavours/TCPTahoeRenoFamily_old.h \
	transport/tcp_old/flavours/TCPTahoe_old.h
$O/transport/tcp_old/flavours/TCPTahoeRenoFamily.o: transport/tcp_old/flavours/TCPTahoeRenoFamily.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPAlgorithm_old.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/flavours/TCPBaseAlg_old.h \
	transport/tcp_old/flavours/TCPTahoeRenoFamily_old.h
$O/transport/tcp_old/queues/TCPMsgBasedRcvQueue.o: transport/tcp_old/queues/TCPMsgBasedRcvQueue.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCPReceiveQueue_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/queues/TCPMsgBasedRcvQueue_old.h \
	transport/tcp_old/queues/TCPVirtualDataRcvQueue_old.h
$O/transport/tcp_old/queues/TCPMsgBasedSendQueue.o: transport/tcp_old/queues/TCPMsgBasedSendQueue.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCPSendQueue_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/queues/TCPMsgBasedSendQueue_old.h
$O/transport/tcp_old/queues/TCPVirtualDataRcvQueue.o: transport/tcp_old/queues/TCPVirtualDataRcvQueue.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCPReceiveQueue_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/queues/TCPVirtualDataRcvQueue_old.h
$O/transport/tcp_old/queues/TCPVirtualDataSendQueue.o: transport/tcp_old/queues/TCPVirtualDataSendQueue.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/tcp_old/TCPConnection_old.h \
	transport/tcp_old/TCPSendQueue_old.h \
	transport/tcp_old/TCP_old.h \
	transport/tcp_old/queues/TCPVirtualDataSendQueue_old.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	transport/contract/UDPControlInfo_m.h \
	transport/udp/UDP.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/transport/udp/UDPPacket_m.o: transport/udp/UDPPacket_m.cc \
	base/INETDefs.h \
	transport/udp/UDPPacket_m.h
$O/underTest/channels/LinkFailureManager.o: underTest/channels/LinkFailureManager.cc \
	underTest/channels/LinkFailureManager.h \
	underTest/channels/LinkFailureMessage_m.h \
	underTest/channels/ProgramedFailureChannel.h
$O/underTest/channels/LinkFailureMessage_m.o: underTest/channels/LinkFailureMessage_m.cc \
	underTest/channels/LinkFailureManager.h \
	underTest/channels/LinkFailureMessage_m.h
$O/underTest/channels/MyThroughputMeteringChannel.o: underTest/channels/MyThroughputMeteringChannel.cc \
	underTest/channels/MyThroughputMeteringChannel.h
$O/underTest/channels/ProgramedFailureChannel.o: underTest/channels/ProgramedFailureChannel.cc \
	underTest/channels/LinkFailureManager.h \
	underTest/channels/ProgramedFailureChannel.h
$O/underTest/wpan/Isabel/Analysis/AnalysisEnergy.o: underTest/wpan/Isabel/Analysis/AnalysisEnergy.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/BasicBattery.h \
	battery/Energy.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	underTest/wpan/Isabel/Analysis/AnalysisEnergy.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/underTest/wpan/Isabel/Base/Display.o: underTest/wpan/Isabel/Base/Display.cc \
	underTest/wpan/Isabel/Base/Display.h
$O/underTest/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.o: underTest/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.cc \
	underTest/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.h
$O/underTest/wpan/applications/Ieee802154TestApp/Ieee802154TestApp.o: underTest/wpan/applications/Ieee802154TestApp/Ieee802154TestApp.cc \
	applications/trafgen/TrafGenPar.h \
	underTest/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.h \
	underTest/wpan/applications/Ieee802154TestApp/Ieee802154TestApp.h
$O/underTest/wpan/linklayer/bmac/BMacLayer.o: underTest/wpan/linklayer/bmac/BMacLayer.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/mfcore/WirelessMacBase.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	underTest/wpan/linklayer/bmac/BMacLayer.h \
	underTest/wpan/linklayer/bmac/bmacpkt_m.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
	underTest/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h \
	util/FWMath.h
$O/underTest/wpan/linklayer/bmac/bmacpkt_m.o: underTest/wpan/linklayer/bmac/bmacpkt_m.cc \
	underTest/wpan/linklayer/bmac/bmacpkt_m.h
$O/underTest/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.o: underTest/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.cc \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h
$O/underTest/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.o: underTest/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.cc \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
	underTest/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h
$O/underTest/wpan/linklayer/ieee802154/mac/Ieee802154Link.o: underTest/wpan/linklayer/ieee802154/mac/Ieee802154Link.cc \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	underTest/wpan/linklayer/ieee802154/mac/Ieee802154Link.h
$O/underTest/wpan/linklayer/ieee802154/mac/Ieee802154Mac.o: underTest/wpan/linklayer/ieee802154/mac/Ieee802154Mac.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/RadioState.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
	underTest/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h \
	underTest/wpan/linklayer/ieee802154/mac/Ieee802154Link.h \
	underTest/wpan/linklayer/ieee802154/mac/Ieee802154Mac.h \
	underTest/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h
$O/underTest/wpan/linklayer/ieee802154/mac/csma802154.o: underTest/wpan/linklayer/ieee802154/mac/csma802154.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/RadioState.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Field.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
	underTest/wpan/linklayer/ieee802154/mac/Ieee802154Frame_m.h \
	underTest/wpan/linklayer/ieee802154/mac/Ieee802154Link.h \
	underTest/wpan/linklayer/ieee802154/mac/Ieee802154Mac.h \
	underTest/wpan/linklayer/ieee802154/mac/csma802154.h \
	underTest/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h
$O/underTest/wpan/linklayer/ieee802154/phyLayer/Ieee802154Phy.o: underTest/wpan/linklayer/ieee802154/phyLayer/Ieee802154Phy.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/BasicBattery.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/Radio80211aControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/IReceptionModel.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Enum.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives_m.h \
	underTest/wpan/linklayer/ieee802154/phyLayer/Ieee802154Phy.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h
$O/underTest/wpan/linklayer/ieee802154/phyLayer/Ieee802154RadioModel.o: underTest/wpan/linklayer/ieee802154/phyLayer/Ieee802154RadioModel.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	linklayer/mfcore/SnrList.h \
	linklayer/radio/IRadioModel.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Const.h \
	underTest/wpan/linklayer/ieee802154/contract/Ieee802154Def.h \
	underTest/wpan/linklayer/ieee802154/phyLayer/Ieee802154RadioModel.h \
	util/FWMath.h
$O/underTest/wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.o: underTest/wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.cc \
	underTest/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt_m.h \
	underTest/wpan/networklayer/Ieee802154StarRouting/Ieee802154StarRouting.h \
	underTest/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h
$O/underTest/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.o: underTest/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.cc \
	underTest/wpan/networklayer/contract/Ieee802154NetworkCtrlInfo_m.h
$O/util/NAMTraceWriter.o: util/NAMTraceWriter.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/TxNotifDetails.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	util/NAMTraceWriter.h \
	world/NAMTrace.h
$O/util/NetAnimTrace.o: util/NetAnimTrace.cc \
	base/INETDefs.h \
	util/NetAnimTrace.h
$O/util/PowerControlManager.o: util/PowerControlManager.cc \
	base/IPowerControl.h \
	util/PowerControlManager.h \
	util/PowerControlMessages_m.h
$O/util/PowerControlMessages_m.o: util/PowerControlMessages_m.cc \
	util/PowerControlMessages_m.h
$O/util/TCPDump.o: util/TCPDump.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/udp/UDPPacket_m.h \
	util/TCPDump.h \
	util/common.h \
	util/headerserializers/IPSerializer.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc
$O/util/XMLUtils.o: util/XMLUtils.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPAddressResolver.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	util/XMLUtils.h
$O/util/common.o: util/common.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	util/common.h
$O/util/dijktraKShortest.o: util/dijktraKShortest.cc \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/manetrouting/base/uint128.h \
	util/dijktraKShortest.h
$O/util/opp_utils.o: util/opp_utils.cc \
	base/INETDefs.h \
	util/opp_utils.h
$O/util/headerserializers/ICMPSerializer.o: util/headerserializers/ICMPSerializer.cc \
	applications/pingapp/PingPayload_m.h \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	util/headerserializers/ICMPSerializer.h \
	util/headerserializers/IPSerializer.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/headers/ip.h \
	util/headerserializers/headers/ip_icmp.h \
	util/headerserializers/headers/tcp.h
$O/util/headerserializers/IPSerializer.o: util/headerserializers/IPSerializer.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPDatagram.h \
	networklayer/ipv4/IPDatagram_m.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/headerserializers/ICMPSerializer.h \
	util/headerserializers/IPSerializer.h \
	util/headerserializers/SCTPSerializer.h \
	util/headerserializers/TCPSerializer.h \
	util/headerserializers/UDPSerializer.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/headers/ip.h \
	util/headerserializers/headers/tcp.h
$O/util/headerserializers/SCTPSerializer.o: util/headerserializers/SCTPSerializer.cc \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPControlInfo.h \
	networklayer/contract/IPControlInfo_m.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPRoute.h \
	networklayer/ipv4/IPRouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h \
	util/headerserializers/SCTPSerializer.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/headers/ip.h \
	util/headerserializers/headers/sctp.h
$O/util/headerserializers/TCPIPchecksum.o: util/headerserializers/TCPIPchecksum.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/tcp.h
$O/util/headerserializers/TCPSerializer.o: util/headerserializers/TCPSerializer.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/TCPSerializer.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/headers/tcp.h
$O/util/headerserializers/UDPSerializer.o: util/headerserializers/UDPSerializer.cc \
	base/INETDefs.h \
	networklayer/contract/IPAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp/TCPSegment.h \
	transport/tcp/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/UDPSerializer.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/headers/tcp.h \
	util/headerserializers/headers/udp.h
$O/world/ChannelAccess.o: world/ChannelAccess.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelControl.h
$O/world/ChannelAccessExtended.o: world/ChannelAccessExtended.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	util/FWMath.h \
	world/ChannelAccess.h \
	world/ChannelAccessExtended.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h
$O/world/ChannelControl.o: world/ChannelControl.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	util/FWMath.h \
	world/ChannelControl.h
$O/world/ChannelControlExtended.o: world/ChannelControlExtended.cc \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	util/FWMath.h \
	world/ChannelControl.h \
	world/ChannelControlExtended.h
$O/world/ChannelInstaller.o: world/ChannelInstaller.cc \
	base/INETDefs.h \
	world/ChannelInstaller.h
$O/world/NAMTrace.o: world/NAMTrace.cc \
	base/INETDefs.h \
	world/NAMTrace.h
$O/world/ScenarioManager.o: world/ScenarioManager.cc \
	base/INETDefs.h \
	base/IScriptable.h \
	world/ScenarioManager.h
$O/world/annotations/AnnotationDummy.o: world/annotations/AnnotationDummy.cc \
	base/INETDefs.h \
	world/annotations/AnnotationDummy.h
$O/world/annotations/AnnotationManager.o: world/annotations/AnnotationManager.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h
$O/world/obstacles/Obstacle.o: world/obstacles/Obstacle.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h
$O/world/obstacles/ObstacleControl.o: world/obstacles/ObstacleControl.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/world/traci/TraCIScenarioManager.o: world/traci/TraCIScenarioManager.cc \
	base/BasicModule.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	mobility/BasicMobility.h \
	mobility/traci/TraCIMobility.h \
	util/FWMath.h \
	world/ChannelControl.h \
	world/traci/TraCIConstants.h \
	world/traci/TraCIScenarioManager.h
$O/world/traci/TraCIScenarioManagerLaunchd.o: world/traci/TraCIScenarioManagerLaunchd.cc \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	linklayer/mfcore/AirFrame_m.h \
	linklayer/mfcore/ModulationType.h \
	util/FWMath.h \
	world/ChannelControl.h \
	world/traci/TraCIConstants.h \
	world/traci/TraCIScenarioManager.h \
	world/traci/TraCIScenarioManagerLaunchd.h

