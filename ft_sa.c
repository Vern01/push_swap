#include "push_swap.h"

void	ft_sa(int **array)
{
	int		temp;
	int		*temp_array;

	temp_array = *array;
	if (array_size(temp_array) < 2)
		return ;
	temp = temp_array[0];
	temp_array[0] = temp_array[1];
	temp_array[1] = temp;
	send_instruction("sa");
}