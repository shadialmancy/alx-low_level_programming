#include "main.h"
/**
 * print_sign - print the sign of n
 * @n: the int to check
 * Return: 1 if n is bigger than zero
 * 0 if n equal to zero
 * -1 if n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
