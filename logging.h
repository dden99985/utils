#include <stdio.h>

#define LOG_FUNCTION	0x0001
#define LOG_ERROR       0x0002
#define LOG_NORMAL      0x0100
#define LOG_DETAIL      0x0200


extern int LOGGING;

void log_message(int level, char *message, ...);
void log_function(char *message, ...);
void log_error(char *message, ...);
