#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function to allocate memory to grid
 * @width: int type
 * @height: int type
 * Return: grid of 0s
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **pointer;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	pointer = malloc(height * sizeof(int *));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		pointer[x] = malloc(width * sizeof(int));
		if (pointer[x] == NULL)
		{
			for (y = 0; y < x;  y++)
				free(pointer[y]);
			free(pointer);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			pointer[x][y] = 0;
		}
	}
	return (pointer);
}
