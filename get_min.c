#include "push_swap.h"

int		get_min(int *array)
{
	int		min;
	int		i;

	min = array[0];
	i = 0;
	while (array[++i])
		if (array[i] < min)
			min = array[i];
	return (min);
}