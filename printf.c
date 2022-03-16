#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _printf - printf
 * @format: format receive
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list ls;
	int i = 0, j = 0, sum = 0, res = 0, f = 0;
	pr selector[] = {
		{'s', print_string}, {'c', print_char}, {'%', print_percent},
		{'d', print_int}, {'i', print_int},
		{'\0', NULL}};
	va_start(ls, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{	f = 0;
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			for (j = 0; selector[j].c != '\0'; j++)
				if (format[i] == selector[j].c)
				{
					res += selector[j].f(ls);
					f = 1;
				}
		}
		else
		{
			_putchar(format[i]);
			sum++;
			f = 1;
		}
		if (f == 0)
		{
			i--;
			_putchar(37);
			res++;
		}
	}
	sum += res;
	return (sum);
}
