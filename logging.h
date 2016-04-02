#include <stdio.h>

#define LOG_FUNCTION	0x0001
#define LOG_ERROR       0x0002
#define LOG_NORMAL      0x0100
#define LOG_DETAIL      0x0200

#define WHERESTR  "[file %s, line %d]: "
#define WHEREARG  __FILE__, __LINE__

#ifdef	LOGGING

#define LOGPRINT2(...)       fprintf(stderr, ##__VA_ARGS__)
#define LOGPRINT(_fmt, ...)  LOGPRINT2(WHERESTR _fmt, WHEREARG, ##__VA_ARGS__)

#define log_message(level, message, ...)	if(level & LOGGING) LOGPRINT(message, __VA_ARGS__);

#if (LOGGING & LOG_FUNCTION)
#define log_function(message, ...)		LOGPRINT(message, __VA_ARGS__);
#else
#define log_function(message, ...)
#endif

#if (LOGGING & LOG_ERROR)
#define log_error(message, ...)			LOGPRINT(message, __VA_ARGS__);
#else
#define log_error(message, ...)
#endif

#if (LOGGING & LOG_NORMAL)
#define log_normal(message, ...)		LOGPRINT(message, __VA_ARGS__);
#else
#define log_normal(message, ...)
#endif

#else

#define log_message(level, message, ...)
#define log_function(message, ...)
#define log_error(message, ...)
#define log_normal(message, ...)

#endif
