#include "main.h"

/**
* _memcpy - copy memory area.
* @dest: copied
* @src: original
* @n: limit
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = src;
	char *y = dest;

	while (n != 0)
	{
	*y++ = *x++;
	n--;
	}

	return (dest);
}
