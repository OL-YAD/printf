#include "main.h"

/**
 * printhex - prints an hexadecimal.
 * @format: format to point hexadecimal.
 * @pa: list that contains the hexadecimal.
 * Return: number.
 */
int printhex(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int num2;
	int i, j, c, ntm;
	char *numhex;

	(void)format;

	if (num == 0)
	{
		return (_putchar('0'));
	}
	for (num2 = num; num2 != 0; ntm++)
	{
		num2 = num2 / 10;
	}
	numhex = malloc(ntm);
	for (i = 0; num != 0; i++)
	{
		c = num % 10;
		if (c < 10)
			numhex[i] = c + '0';
		else
			numhex[i] = c - 10 + '0';
		num = num / 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(numhex[j]);
	}
	free(numhex);
	return (ntm);
}

/**
 * printHEX - prints an HEXadecimal.
 * @format: format to print HEXadecimal.
 * @pa: va_list that contains the HEX to print.
 * Return: number of digits printed.
 */
int printHEX(char *format, va_list pa)
{
	unsigned int NUM = va_arg(pa, unsigned int);
	unsigned int NUM2;
	int I, J, C, NTM = 0;
	char *NUMHEX;

	(void)format;

	if (NUM == 0)
		return (_putchar('\0'));
	for (NUM2 = NUM; NUM2 != 0; NTM++)
	{
		NUM2 = NUM2 / 16;
	}
	NUMHEX = malloc(NTM);
	for (I = 0; NUM != 0; I++)
	{
		C = NUM % 16;
		if (C < 10)
			NUMHEX[I] = C + '0';
		else
			NUMHEX[I] = C - 10 + 'A';
		NUM = NUM / 16;
	}
	for (J = I - 1; J >= 0; J--)
		_putchar(NUMHEX[J]);

	free(NUMHEX);
	return (NTM);
}
