#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
	}

	putchar('\n');

	return (0);
}
