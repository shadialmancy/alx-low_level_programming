#include "main.h"
/**
 * print_number -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: 0.
 */
void print_number(int n)
{
	unsigned int a;
	int b, c;

	b = 10;
	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		a = n;
	while (a / b > 9)
	{
		b = b * 10;
	}
	while (b > 0)
	{
		c = a / b;
		a = a % b;
		_putchar (c + '0');
		b = b / 10;
	}
	}
}
