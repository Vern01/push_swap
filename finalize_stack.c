#include "push_swap.h"
#include <stdio.h>
void	ra_to_top(int **array, int min)
{
	int		temp;

	temp = *array[0];
	while (temp != min)
		temp = ft_ra(array);
}

void	rra_to_top(int **array, int min)
{
	int		temp;

	temp = *array[0];
	while (temp != min)
		temp = ft_rra(array);
}

void	lowest_first(int **array)
{
	int		*temp_array;
	int		size;

	temp_array = *array;
	size = array_size(temp_array);
	if (is_lower_half(temp_array, size))
		ra_to_top(array, get_min(*array));
	else
		rra_to_top(array, get_min(*array));

}

void	push_over_b(int **array, int **help)
{
	int		size;
	int		i;

	size = array_size(*help);
	i = 0;
	while (i++ < size)
		ft_pb(array, help);
}

void	finalize_stack(int **array, int **help)
{
	lowest_first(array);
	push_over_b(array, help);
}