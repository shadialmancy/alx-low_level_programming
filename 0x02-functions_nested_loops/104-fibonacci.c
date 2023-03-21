#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	int count;
	unsigned long x, y, z;
	unsigned long m, n, p, carry;

	count = 0;
	x = 0;
	y = 1;
	for (count = 1; count <= 91; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", k);
	}
	m = x % 1000;
	i = x / 1000;
	n = y % 1000;
	j = y / 1000;
	while (count <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		z = (x + y) + carry;
		m = n;
		n = p;
		x = y;
		y = z;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
