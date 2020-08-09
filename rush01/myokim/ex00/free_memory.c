#include <unistd.h>
#include <stdlib.h>

void	free_mem(int **grid, int **permu, int *array)
{
	int i;

    i = 0;
	while (i < 6)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
    i = 0;
    while (i < 24)
    {
        free(permu[i]);
		i++;
    }
    free(permu);
	free(array);
}