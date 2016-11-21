#include "push_swap.h"

int		check_swap(int **array)
{
	int		*temp_array;

	temp_array = *array;
	if (temp_array[0] < temp_array[1])
		return (0);
	ft_sa(array);
	return (1);
}
