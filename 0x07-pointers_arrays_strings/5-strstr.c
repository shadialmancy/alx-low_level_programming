#include "main.h"
/**
* _strstr - locates a substring.
* @haystack: char array
* @needle: char array (keyword)
*
* Return: array
*/
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y = 0;

	while (needle[y] != '\0')
		y++;

	while (*haystack)
	{
		for (x = 0; needle[x]; i++)
		{
			if (haystack[x] != needle[x])
				break;
		}
		if (x != y)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
