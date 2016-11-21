#include "push_swap.h"

void	push_down_array(int **array)
{
	int     size;
    int     *temp_array;

    temp_array = *array;
    size = array_size(temp_array);
    while (--size >= 0)
        temp_array[size + 1] = temp_array[size];
}

void    push_to_array(int **array, int value)
{
    push_down_array(array);
    *array[0] = value;
}