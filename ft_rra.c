#include "push_swap.h"

int    ft_rra(int **array)
{
    int     temp;
    int     *temp_array;

    temp_array = *array;
    temp = temp_array[array_size(temp_array) - 1];
    move_down_array(array);
    *array[0] = temp;
    send_instruction("rra");
    return (temp_array[0]);
}