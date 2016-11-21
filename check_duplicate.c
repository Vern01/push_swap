#include "push_swap.h"
#include "stdio.h"

void	swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		*sort(int *array, int size)
{
	int		i;
	int		j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size - 1)
		{
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
			if (array[j] == array[j + 1])
				exit_msg("No duplicates allowed");
		}
	}
	return (array);
}

int     *check_duplicate(int *array, int size)
{
	int		*sorted;
	int		count;

	if (!(sorted = (int *)malloc(sizeof(int) * size)))
		exit_msg("Malloc error: check_duplicate.c");
	count = -1;
	while (++count < size)
		sorted[count] = array[count];
    sorted = sort(sorted, size - 1);
    return (sorted);
}