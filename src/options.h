#ifndef OPTIONS_H
#define OPTIONS_H

/* The default name for conf, log, pid files */
#define DEFAULTNAME "hopm"

/* file extensions */
/* config */
#define CONFEXT "conf"

/* log file */
#define LOGEXT "log"

/* PID file */
#define PIDEXT "pid"

/* Maximum commands to queue */
#define COMMANDMAX 64

/* Interval (in seconds) to check command queue for timed out commands */
#define COMMANDINTERVAL 10

/* Timeout of commands (in seconds) */
#define COMMANDTIMEOUT 180

/* Interval in how often we try to reconnect (in seconds) */
#define RECONNECTINTERVAL 30
#endif /* OPTIONS_H */
