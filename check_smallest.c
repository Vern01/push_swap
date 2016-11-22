#include "push_swap.h"

int		check_smallest(int	**array, int **help, int size)
{
	static int	full = 0;

	if (!full && array_size(*help) == (size / 2))
		full = 1;
	else if (!full && *array[0] == get_min(*array))
	{
		ft_pa(array, help);
		return (1);
	}
	return (0);
}