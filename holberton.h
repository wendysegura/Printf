#ifndef _holberton_h
#define _holberton_h
#include <stdlib.h> /*NULL*/
#include <stdarg.h> /*va_list*/
#include <limits.h> /*INT_MIN*/

int _printf(const char *format, ...);

/**
* struct printf_functions - struct to match type with printer funcitons
* @type: input to determine type of printf function
* @printer: specific printf function
* Description: the the correct copy function to use
**/
typedef struct printf_functions
{
	char type;
	int (*printer)();
} pstruct;

/* _PUCHAR.C */
int _putchar(char c);

/* UTIL_CHARACTERS */
int print_percent(void);
int print_char(va_list arg);
int print_string(va_list arg);
int print_reverse(va_list arg);
/* UTIL_NUMBERS */
int print_number(va_list arg);
int print_binary(va_list arg);
int print_rot13(va_list arg);
#endif /* _holberton_h */
