#include "push_swap.h"

void    ft_pa(int **a, int **b)
{
    push_to_array(b, *a[0]);
    move_up_array(a);
    send_instruction("pa");
}