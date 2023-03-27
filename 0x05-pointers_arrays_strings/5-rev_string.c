#include "main.h"

/**
  * rev_string - Reverses the string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, num, length;
	char *a, b;

	a = s;

	while (s[num] != '\0')
	{
		num++;
	}

	for (length = 1; length < num; length++)
	{
		a++;
	}

	for (i = 0; i < (num / 2); i++)
	{
		b = s[i];
		s[i] = *a;
		*a = b;
		a--;
	}
}
