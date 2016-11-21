#include "push_swap.h"

int		is_lower_half(int *array, int size)
{
	int		min;
	int		i;

	min = get_min(array);
	i = -1;
	while (++i < (size / 2))
		if (array[i] == min)
			return (min);
	return (0);
}