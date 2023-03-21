#include "main.h"
#include <unistd.h>
/**
 * main -  writes the character that has been provided to stdout
 *
 * Return: 0.
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
