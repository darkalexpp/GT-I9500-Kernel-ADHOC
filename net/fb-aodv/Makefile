#AODV for kernel 3.4

#FLAGS
#DEBUG: show debug messages
#NOMIPS: used for non-based mipsel systems
EXTRA_CFLAGS += -DNOMIPS -fno-pic
obj-$(CONFIG_FB_AODV) +=fbaodv.o
fbaodv-objs := fbaodv_protocol.o aodv_dev.o aodv_neigh.o aodv_route.o aodv_thread.o hello.o packet_in.o packet_out.o rerr.o rrep.o rreq.o socket.o task_queue.o timer_queue.o utils.o gw_list.o probe_ett.o rpdb.o src_list.o aodv_neigh_2h.o route_alg.o st_rreq.o tos.o packet_queue.o brk_list.o rcvp.o
