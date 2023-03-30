#include "main.h"

/**
 * reverse_string - reverse array
 * @n: integer params
 * Return: 0
 */

void reverse_string(char *n)
{
	int x = 0;
	int j = 0;
	char temp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (j = 0; j < x; j++, x--)
	{
		temp = *(n + j);
		*(n + j) = *(n + x);
		*(n + x) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, x = 0, j = 0, digits = 0, val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + j) != '\0')
		j++;
	x--;
	j--;
	if (j >= size_r || x >= size_r)
		return (0);
	while (j >= 0 || x >= 0 || overflow == 1)
	{
		if (x < 0)
			val1 = 0;
		else
			val1 = *(n1 + x) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + x) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		x--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	reverse_string(r);
	return (r);
}
