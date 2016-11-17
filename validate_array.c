#include "push_swap.h"
#include <stdio.h>

void	print_a(int *array, int size)
{
	int		i;

	i = 0;
	while (i < size)
		printf("%d\n", array[i++]);
}

int    *validate_array(char **array, int size)
{
    int     *iarray;
    int     *sorted;

    iarray = isnumber_array(array, size);
    sorted = check_duplicate(iarray, size);
    print_a(iarray, size);
    write(1, "$$", 2);
    iarray = simplify_array(iarray, sorted, size);
    return (iarray);
}