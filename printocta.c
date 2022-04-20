#include "main.h"

/**
 * printocta - prints an octal number.
 * @format: format to print octal.
 * @pa: list that to print the octal.
 * Return: number.
 */
int printocta(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int cop;
	char *octa;
	int i, j = 0, octn = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (cop = num; cop != 0; j++)
		cop = cop / 8;
	octa = malloc(j);
	if (!octa)
		return (-1);

	for (i = j - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '0';
		num = num / 8;
	}
	for (i = 0; i < j && octa[i] == '0'; i++)
		;
	for (; i < j; i++)
	{
		_putchar(octa[i]);
		octn++;
	}
	free(octa);
	return (octn);
}
