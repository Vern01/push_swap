#include "push_swap.h"

void	rotate_stack(int **array, int size)
{
	int		*temp;

	temp = *array;
	if (is_lower_half(temp, size))
		ft_ra(array);
	else
		ft_rra(array);
}