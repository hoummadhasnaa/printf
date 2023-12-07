#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - matching the conversion specifiers for printf
 * @id: typing char pointer of the specifier
 * @f: typing pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf_Rstr(va_list args);
int printf_rev(va_list args);
int printf_hex_add(unsigned long int num);
int printf_HEX_add(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_dec(va_list args);
int printf_int(va_list args);
int printf_37(void);
int _strlenc(const char *s);
int _strlen(char *s);
int printf_string(va_list val);
int printf_pointer(va_list val);
int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
