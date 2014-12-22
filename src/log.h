#ifndef LOG_H
#define LOG_H

extern void log_open(char *filename);
extern void log_close(void);
extern void scanlog_open(char *filename);
extern void scanlog_close(void);
#ifdef __GNUC__
extern void log_printf(char *data, ...) __attribute__((format(printf,1,2)));
#else
extern void log_printf(char *data, ...);
#endif

#endif

