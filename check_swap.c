#include "push_swap.h"

int		check_swap(int **array)
{
	int		*temp_array;

	temp_array = *array;
	if (temp_array[0] < temp_array[1] || (temp_array[1] == get_min(temp_array) && temp_array[0] == get_max(temp_array)))
		return (0);
	ft_sa(array);
	return (1);
}
