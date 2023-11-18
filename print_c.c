#include "main.h"

/**
 * print_c - prints a char
 * @val: arguments
 * Return: an int
 */
int print_c(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
