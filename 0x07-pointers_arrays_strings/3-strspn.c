#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: char array
* @accept: char array
* Return: break position
*/
unsigned int _strspn(char *s, char *accept)
{
	int letter;
	int positon = 0;

	while (s[positon])
	{
		for (letter = 0; accept[letter]; letter++)
		{
			if (accept[letter] == s[positon])
			{
				break;
			}
		}
		if (!accept[letter])
		{
			break;
		}
		positon++;
	}
	return (positon);
}
