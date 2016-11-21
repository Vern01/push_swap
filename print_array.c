#include "push_swap.h"

void	print_array(int *array)
{
	int		i;
	char	c;

	i = 0;
	while (array[i])
	{
		c = array[i++] + '0';
		write(1, &c, 1);
	}
	write(1, "-\n", 2);
}