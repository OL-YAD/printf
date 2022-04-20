#include "main.h"

/**
 * printstr - print string.
 * @pa: va_list.
 * @format: string format.
 *
 * Return: number of for print.
 */
int printstr(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int contador;
	(void)format;

	if (string == NULL)
	{
		string = "(null)";
	}
	contador = _puts(string);

	return (contador);
}
