#include <stdio.h>

/**
 * main - list all the natural numbers under 1024
 * that are multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	}
	printf("%d\n", sum);

	return (0);
}
