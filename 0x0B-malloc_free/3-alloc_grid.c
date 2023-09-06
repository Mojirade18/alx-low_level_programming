#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @heigth: heigth input
 * Return: pointer to 2 dim array
 */
int **alloc_grid(int width, int heigth)
{
	int **mee;
	int x, y;

	if (width <= 0 || heigth <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * heigth);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < heigth; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);
			free(mee);
			return (NULL);
		}
	}
	for (x = 0; x < heigth; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}
	return (mee);
}
