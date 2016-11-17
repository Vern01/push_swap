#include "push_swap.h"

int     *isnumber_array(char **array, int size)
{
    int     count;
    int     *iarray;

    if (!(iarray = (int *)malloc(sizeof(int) * size)))
        exit_msg("Malloc failed: isdigit_array.c");
    count = -1;
    while (++count < size - 1)
    {
        if (!is_number(array[count]))
            exit_msg("The array must only contain numbers.");
        iarray[count] = to_number(array[count]);
    }
    return (iarray);
}