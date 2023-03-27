#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int c = 0;
	int x = 0;
	int min = 1;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			x = 1;
			num = (num * 10) + (s[c] - '0');
			c++;
		}

		if (x == 1)
		{
			break;
		}

		c++;
	}

	num *= min;
	return (num);
}
