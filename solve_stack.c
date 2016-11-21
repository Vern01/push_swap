#include "push_swap.h"

void	solve_stack(int **array, int **help, int size)
{
	while (1)
	{
		if (stack_ordered(array))		
			return ;
		while (!stack_ordered(array))
		{
			if (check_swap(array) || check_smallest(array, help, size))
				break ;
			rotate_stack(array, size);
		}
	}
}
