#include "push_swap.h"

int    ft_ra(int **array)
{
    int     temp;
    int     *temp_array;

    temp_array = *array;
    temp = temp_array[0];
    move_up_array(array);
    temp_array[array_size(temp_array)] = temp;
    send_instruction("ra");
    return (temp_array[0]);
}