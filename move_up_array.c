#include "push_swap.h"

void    move_up_array(int **array)
{
    int     count;

    count = -1;
    while (*array[++count])
        *array[count] = *array[count + 1];
}