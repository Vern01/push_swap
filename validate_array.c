#include "push_swap.h"

int    *validate_array(char **array, int size)
{
    int     *iarray;
    int     *sorted;

    iarray = isnumber_array(array, size);
    sorted = check_duplicate(iarray, size);
    iarray = simplify_array(iarray, sorted, size);
    return (iarray);
}