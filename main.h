#include <stdarg.h>
#include <stddef.h>

#ifndef _main_h_
#define _main_h_

int _putchar(char c);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);
void print_binary(unsigned int n, unsigned int* printed);
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_unsignedToIntToHex(unsigned int num, char _case);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_STR(va_list arg);

/**
 * struct identifierStruct - structure definition
 * @identifier: type.
 * @printer: function to print.
 */
typedef struct identifierStruct
{
	char *identifier;
	int (*printer)(va_list);
} identifierStruct;

#endif /* MAIN_H_ */
