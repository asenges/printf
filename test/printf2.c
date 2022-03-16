#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * _printf - my printf function
 * Return: int
 * @format: const char
 * @...: args
 *
 * Description:
 * Author Alex Senges (als) and Leandro Irigoyen
 * Date Mar 11, 2022
 */
int _printf(const char *format, ...)
{
	int i, j, sum = 0, res = 0;
	va_list ls;

	fsel selector[] = {
		{"c", print_char}, {"d", print_integer}, {"i", print_integer},
		{"s", print_string}, {"%", print_percent}, {NULL, NULL}
	};

	va_start(ls, format);

	if (format == NULL)
		return (-1);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			sum++;
		}
		else
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;
			j = 0;
			while (selector[j].c[0] != '\0')
			{
				if (ls == NULL)
					break;

				if (selector[j].c[0] == format[i])
				{
					res = selector[j].f(ls);
					sum += res;
					break;
				}
				j++;
			}
		}
		i++;
	}
	va_end(ls);
	return (sum);
}

