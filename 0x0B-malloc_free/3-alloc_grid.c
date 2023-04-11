#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - allocate 2Darry
 * @width: width of grid
 * @height: height of grid
 *
 * Return: a pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
			if (grid[i] == NULL)
			{

			for (j = 0; j < i; j++)
			free(grid[j]);
			free(grid);
			return (NULL);
			}
			}

			for (i = 0; i < height; i++)
			{
			for (j = 0; j < width; j++)
			{
			grid[i][j] = 0;
			}
			}

			return (grid);
}
