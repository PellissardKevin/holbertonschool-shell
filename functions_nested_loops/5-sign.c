#include "main.h"
#include <ctype.h>
/**
 * print_sign - print sign after check c
 * @n: parameter
 * Return: 0 if is zero, 1 if greater than zero, -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
