/*
 * iperf, Copyright (c) 2014-2019, The Regents of the University of
 * California, through Lawrence Berkeley National Laboratory (subject
 * to receipt of any required approvals from the U.S. Dept. of
 * Energy).  All rights reserved.
 *
 * If you have questions about your rights to use or distribute this
 * software, please contact Berkeley Lab's Technology Transfer
 * Department at TTD@lbl.gov.
 *
 * NOTICE.  This software is owned by the U.S. Department of Energy.
 * As such, the U.S. Government has been granted for itself and others
 * acting on its behalf a paid-up, nonexclusive, irrevocable,
 * worldwide license in the Software to reproduce, prepare derivative
 * works, and perform publicly and display publicly.  Beginning five
 * (5) years after the date permission to assert copyright is obtained
 * from the U.S. Department of Energy, and subject to any subsequent
 * five (5) year renewals, the U.S. Government is granted for itself
 * and others acting on its behalf a paid-up, nonexclusive,
 * irrevocable, worldwide license in the Software to reproduce,
 * prepare derivative works, distribute copies to the public, perform
 * publicly and display publicly, and to permit others to do so.
 *
 * This code is distributed under a BSD style license, see the LICENSE
 * file for complete information.
 */
#include "iperf_config.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/time.h>
#include <sys/select.h>
#include <limits.h>

#ifdef HAVE_NETINET_SCTP_H
#include <netinet/sctp.h>
#endif /* HAVE_NETINET_SCTP_H */

#include "iperf.h"
#include "iperf_api.h"
#include "iperf_sctp.h"
#include "net.h"

/* iperf_sctp_recv
 *
 * receives the data for SCTP
 */
int iperf_sctp_recv(struct iperf_stream *sp) {
    i_errno = IENOSCTP;
    return -1;
}

/* iperf_sctp_send
 *
 * sends the data for SCTP
 */
int iperf_sctp_send(struct iperf_stream *sp) {
    i_errno = IENOSCTP;
    return -1;
}

/* iperf_sctp_accept
 *
 * accept a new SCTP stream connection
 */
int iperf_sctp_accept(struct iperf_test *test) {
    i_errno = IENOSCTP;
    return -1;
}

/* iperf_sctp_listen
 *
 * start up a listener for SCTP stream connections
 */
int iperf_sctp_listen(struct iperf_test *test) {
    i_errno = IENOSCTP;
    return -1;
}

/* iperf_sctp_connect
 *
 * connect to a SCTP stream listener
 */
int iperf_sctp_connect(struct iperf_test *test) {
    i_errno = IENOSCTP;
    return -1;
}

int iperf_sctp_init(struct iperf_test *test) {
    i_errno = IENOSCTP;
    return -1;
}

/* iperf_sctp_bindx
 *
 * handle binding to multiple endpoints (-X parameters)
 */
int iperf_sctp_bindx(struct iperf_test *test, int s, int is_server) {
    i_errno = IENOSCTP;
    return -1;
}
