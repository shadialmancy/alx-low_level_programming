#include <stdio.h>

/**
 * main - Prints all alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar("\n");	

	return (0);
}
