#include "push_swap.h"

void    ft_rra(int **array)
{
    int     temp;

    temp = *array[array_size(*array) - 1];
    move_down_array(array);
    *array[0] = temp;
}