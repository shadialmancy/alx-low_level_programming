#include "holberton.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input
 * Return: 1 otherwise 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
