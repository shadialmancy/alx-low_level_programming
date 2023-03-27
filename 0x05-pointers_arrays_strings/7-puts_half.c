#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int x = 0;
	int num;

	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 1)
	{
		num = (x - 1) / 2;
		num += 1;
	}
	else
	{
		num = x / 2;
	}

	for (; num < x; num++)
	{
		_putchar(str[num]);
	}

	_putchar('\n');
}
