#include "main.h"

/**
 * print_sign - check sign of a number.
 *
 *  @n: number to be checked
 *  Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
