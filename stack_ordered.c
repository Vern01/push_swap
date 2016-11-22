#include "push_swap.h"

void	outer_swap(int **array)
{
	ft_ra(array);
	ft_sa(array);
}

int		stack_ordered(int **array)
{
	static int	max = 0;
	int			i;
	int			*temp_array;

	temp_array = *array;
	if (!max)
		max = get_max(temp_array);
	i = 0;
	while (temp_array[i] && temp_array[i + 1])
	{
		if (temp_array[i] > temp_array[i + 1] && !(temp_array[i] == max && temp_array[i + 1] == get_min(temp_array)))
			return (0);
		i++;
	}
	if (temp_array[0] < temp_array[array_size(temp_array) - 1] && (temp_array[0] != get_min(temp_array)))
		outer_swap(array);
	return (1);
}