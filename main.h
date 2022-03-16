#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <stdarg.h>
/**
 * hexa - struct
 * @i: integer
 * @c: characters
 */
typedef struct rot13
{
	char c;
} rt;
/**
 * prf -prf
 * @c: characters
 * @f: pointer to function
 */
typedef struct prf
{
	char c;
	int (*f)(va_list p);

} pr;
int _printf(const char *format, ...);
int print_int(va_list i);
int print_string(va_list s);
int print_char(va_list c);
int _putchar(char c);
int print_percent(va_list c);
#endif
