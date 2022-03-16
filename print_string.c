#include "main.h"
/**
 * print_string - print string char
 * @s: valist
 * Return: i
 */
int print_string(va_list s)
{
	int i = 0;
	char *nil = "(null)";
	char *aux = va_arg(s, char *);

	if (aux != NULL)
		for (i = 0; aux[i]; i++)
			_putchar(aux[i]);
	else
		for (i = 0; nil[i]; i++)
			_putchar(nil[i]);

	return (i);
}
