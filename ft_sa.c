#include "push_swap.h"

void	ft_sa(int **array)
{
	int	temp;

	if (array_size(*array) < 2)
		return ;
	temp = *array[0];
	*array[0] = *array[1];
	*array[1] = temp;
	send_instruction("sa");
}