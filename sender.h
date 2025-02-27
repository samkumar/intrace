/*
 * author: Robert Swiecki <robert@swiecki.net>
 */

#ifndef _SENDER_H_
#define _SENDER_H_

/* For FreeBSD/Sorlaris */
//#include <netinet/in_systm.h>

//#include <netinet/in.h>
//#include <netinet/tcp.h>
//#include <netinet/ip.h>

#define MAX_PAYL_SZ 1460

extern useconds_t intrace_probe_gap_us;

extern int sender_init(intrace_t * intrace);
extern void *sender_thr(void *arg);

#endif
