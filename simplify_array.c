#include "push_swap.h"

int     *simplify_array(int *array, int *sorted, int size)
{
    int     i;
    int     j;
	int		temp[size - 1];

    i = -1;
    while (++i < size - 1)
    {
        j = -1;
        while (++j < size - 1)
            if (array[j] == sorted[i])
            {
                temp[j] = i + 1;
                break ;
            }
    }
	i = -1;
	while (++i < size - 1)
		array[i] = temp[i];
    array[size - 1] = 0;
    return (array);
}