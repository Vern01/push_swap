#include "push_swap.h"

void    move_up_array(int **array)
{
    int     count;
    int     *temp;

    count = 0;
    temp = *array;
    while (temp[count] && temp[count + 1])
    {
        temp[count] = temp[count + 1];
        count++;
    }
    temp[count] = 0;
}