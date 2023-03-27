#include "main.h"

/**
 * rev_string - function with one argument
 * @s: char type argument
 *
 * Description: reversing a string
 * Return: na
 */
void rev_string(char *s)
{
	int x, y, tmp, len;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	y = 0;
	len = x;
	x--;
	while (y < len / 2)
	{
		tmp = s[y];
		s[y] = s[x];
		s[x] = tmp;
		x--;
		y++;
	}
}
