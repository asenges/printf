#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * print_integer - print integer
 * @i: parameter
 * Return: int
 */
int print_integer(va_list i)
{
	int num, j, w, sum;
	char *res;

	num = va_arg(i, int);
	w = 1;
	j = 0;
	w = num;

	while (w >= 10)
	{
		w = w / 10;
		j++;
	}

	res = malloc(j);

	for (j = 0; num > 0; j++)
	{
		res[j] = num % 10;
		num = num / 10;
	}

	sum = 0;
	for (j = (strlen(res) - 1); j >= 0; j--)
	{
		_putchar(res[j] + '0');
		sum++;
	}

	free(res);

	return (sum);
}


/**
 * print_char - print char
 * @c: parameter
 * Return: int
 */
int print_char(va_list c)
{
	char res;

	res = va_arg(c, int);
	_putchar(res);
	return (1);
}

/**
 * print_string - print string
 * @s: parameter
 * Return: int
 */
int print_string(va_list s)
{
	int i;
	char *res = va_arg(s, char *);

	for (i = 0; res[i]; i++)
	{
		_putchar(res[i]);
	}
	return (i + 1);
}


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
	int i, j, sum, res;
	va_list ls;

	sum = 0;
	res = 0;
	fsel selector[] = {
		{"c", print_char},
		{"d", print_integer},
		{"i", print_integer},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ls, format);

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
			i++;
			j = 0;
			while (selector[j].c[0] != '\0')
			{
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
	//_putchar(10);
	va_end(ls);
	return (sum);
}

