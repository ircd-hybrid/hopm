#ifndef OPTIONS_H
#define OPTIONS_H

/* The default name for conf, log, pid files */
#define DEFAULTNAME "hopm"

/* file extensions */
/* config */
#define CONFEXT "conf"

/* log file */
#define LOGEXT "log"

/* Maximum commands to queue */
#define COMMANDMAX 64

/* Interval (in seconds) to check command queue for timed out commands */
#define COMMANDINTERVAL 10

/* Timeout of commands (in seconds) */
#define COMMANDTIMEOUT 180
#endif /* OPTIONS_H */
