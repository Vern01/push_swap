#include "push_swap.h"

int		array_size(int	*array)
{
	int		count;

	count = 0;
	while (array[count] != 0)
		count++;
	return (count);
}