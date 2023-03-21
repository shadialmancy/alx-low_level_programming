#include <stdio.h>
/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
	unsigned long int x;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int length = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;

	printf("%lu", before);
	for (x = 1; x < 91; x++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}
	before1 = (before / length);
	before2 = (before % length);
	after1 = (after / length);
	after2 = (after % length);
	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", after1 + (after2 / length));
		printf("%lu", after2 % length);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}
