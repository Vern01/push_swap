#include "push_swap.h"

/*The function does not replace first element
 *because the point of moving the array down is
 *to replace the first element
 **/
void    move_down_array(int **array)
{
    int     size;

    size = array_size(*array);
    while (--size > 0)
        *array[size] = *array[size - 1];
}