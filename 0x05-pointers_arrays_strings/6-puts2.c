#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
	int i;
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
