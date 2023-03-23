#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers,
 * 
 * Return: 0-14 x10
 */
void more_numbers(void)
{
	int x, num;

	for (num = 0; num < 10; num++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
