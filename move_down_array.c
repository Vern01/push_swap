#include "push_swap.h"

/*The function does not replace first element
 *because the point of moving the array down is
 *to replace the first element
 **/
void    move_down_array(int **array)
{
    int     size;
    int     *temp_array;

    temp_array = *array;
    size = array_size(temp_array);
    while (--size > 0)
        temp_array[size] = temp_array[size - 1];
}