#include "push_swap.h"

void    ft_ra(int **array)
{
    int     temp;

    temp = *array[0];
    move_up_array(array);
    *array[array_size(*array)] = temp;
}