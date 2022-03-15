#ifndef MYFUNC_H
#define MYFUNC_H
#include <stdarg.h>
/**
 * struct fselector - struct
 * @c: char
 * @f: va_list
 *
 * Description:
 * Author: Alex Senges
 */
typedef struct fselector
{
	char *c;
	int (*f)(va_list ls);
} fsel;

int _putchar(char c);
int _printf(const char *format, ...);

#endif

