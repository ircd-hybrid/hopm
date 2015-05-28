#ifndef OPM_TYPES_H
#define OPM_TYPES_H

/* Configuration Directives */
#define OPM_CONFIG_FD_LIMIT      0
#define OPM_CONFIG_BIND_IP       1
#define OPM_CONFIG_DNSBL_HOST    2
#define OPM_CONFIG_TARGET_STRING 3
#define OPM_CONFIG_SCAN_IP       4
#define OPM_CONFIG_SCAN_PORT     5
#define OPM_CONFIG_MAX_READ      6
#define OPM_CONFIG_TIMEOUT       7

/* Configuration Variable Types */
#define OPM_TYPE_INT             1
#define OPM_TYPE_STRING          2
#define OPM_TYPE_ADDRESS         3
#define OPM_TYPE_STRINGLIST      4

/* Protocols */
#define OPM_TYPE_HTTP            1
#define OPM_TYPE_SOCKS4          2
#define OPM_TYPE_SOCKS5          3
#define OPM_TYPE_WINGATE         4
#define OPM_TYPE_ROUTER          5
#define OPM_TYPE_HTTPPOST        6
#define OPM_TYPE_DREAMBOX        7

/* States */
#define OPM_STATE_UNESTABLISHED  1
#define OPM_STATE_ESTABLISHED    2
#define OPM_STATE_NEGSENT        3
#define OPM_STATE_CLOSED         4


/*
 * Callbacks -- If more callback types are added, CBLEN will
 * need to be changed in libopm.h accordingly
 */
#define OPM_CALLBACK_OPENPROXY   0 /* An open proxy has been found REMOTE/SCANNER      */
#define OPM_CALLBACK_NEGFAIL     1 /* Negotiation to a proxy has failed REMOTE/SCANNER */
#define OPM_CALLBACK_END         2 /* A scan has ended REMOTE/SCANNER                  */
#define OPM_CALLBACK_ERROR       3 /* An unrecoverable error has occured               */
#define OPM_CALLBACK_TIMEOUT     4 /* Specific scan (protocol) on host has timed out   */

#endif /* OPM_TYPES_H */
