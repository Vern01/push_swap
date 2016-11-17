#include "push_swap.h"

void    ft_pb(int **a, int **b)
{
    push_to_array(a, *b[0]);
    move_up_array(b);
    send_instruction("pb");
}