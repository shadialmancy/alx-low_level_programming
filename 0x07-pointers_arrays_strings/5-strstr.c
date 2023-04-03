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
	int x, y;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[0])
		{
			for (y = 0; needle[y] != '\0'; y++)
			{
				if (haystack[x + y] != needle[y])
				{
					break;
				}
			}

			if (needle[y] == '\0')
			{
				return (haystack + x);
			}
		}
	}
	return ('\0');
}
