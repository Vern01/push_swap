#include "push_swap.h"

int		get_max(int *array)
{
	int		max;
	int		i;

	max = array[0];
	i = 0;
	while (array[++i])
		if (array[i] > max)
			max = array[i];
	return (max);
}