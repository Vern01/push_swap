#include "push_swap.h"

int     *simplify_array(int *array, int *sorted, int size)
{
    int     i;
    int     j;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1)
            if (array[j] == sorted[i])
            {
                array[j++] = i++;
                break ;
            }
    }
    array[size - 1] = 0;
    return (array);
}