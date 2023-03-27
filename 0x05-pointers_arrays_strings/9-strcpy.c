#include "main.h"

/**
  * _strcpy - Copy a string pointed
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int num;

	for (num = 0; src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}

	dest[num++] = '\0';

	return (dest);
}
