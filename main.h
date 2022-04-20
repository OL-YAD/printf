#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

#ifndef _main_h_
#define _main_h_

int _putchar(char ch);
int _puts(char *string);
int printc(char *format, va_list);
int printstr(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int printint(char *format, va_list pa);
int printunsign(char *format, va_list);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int _printf(char *format, ...);
int print_char(va_list arg);
int printpercent(char *format, va_list pa);
void print_binary(unsigned int n, unsigned int* printed);
int print_unsignedToBinary(va_list arg);
int printocta(char *format, va_list);
int print_unsignedToIntToHex(unsigned int num, char _case);
int print_hex_base(va_list arg, char _case);
int printhex(char *format, va_list);
int printHEX(char *format, va_list);
int print_STR(va_list arg);

/**
 * struct structprint - structure definition
 * @q: type.
 * @u: function to print.
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

#endif /* MAIN_H_ */
