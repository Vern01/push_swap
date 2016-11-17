#include "push_swap.h"

void    push_to_array(int **array, int value)
{
    move_down_array(array);
    *array[0] = value;
}