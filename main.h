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
int print_percent(va_list s);
int print_integer(va_list i);
int print_char(va_list c);
int print_string(va_list s);

#endif

