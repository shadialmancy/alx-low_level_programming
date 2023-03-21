#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: print from this number to 98
 */
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num != 98)
				printf("%d, ", num);
			else if (num == 98)
				printf("%d\n", num);
		}
	} else if (n >= 98)
	{
		for (num = n; num >= 98; num--)
		{
			if (num != 98)
				printf("%d, ", num);
			else if (num == 98)
				printf("%d\n", num);
		}
	}
}
