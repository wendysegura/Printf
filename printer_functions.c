#include "printF.h"

/**
** print_c - prints character
** @arg - char to print
** Return: 0 success
**/
int print_char(va_list arg)
{
	char i;

	i = va_arg(arg, int);
	_putchar(i);

	return (0);
}

/**
** print_string - prints string
** @arg: string to print
** Prints string
** Return: string length
**/
int print_string(va_list arg)
{
	unsigned int i;
	char *str;

	str = va_arg(arg, char *);
	
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}