#include <stdio.h>
#include "main.h"

/**
* print_diagsums - sum of the two diagonals
* @a: array
* @size: size
*/
void print_diagsums(int *a, int size)
{
	int num1 = 0;
	int num2 = 0;
	int i = 0;

	while (i < size)
	{
		num1 += a[i * (size + 1)];
		num2 += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, ", num1);
	printf("%d", num2);
	printf("\n");
}
