#include "push_swap.h"
#include <stdio.h>

void	print_array(int *array)
{
	int		i;

	i = 0;
	while (array[i])
		printf("%d\n", array[i++]);
}

int     main(int argc, char **argv)
{
    int     *array;

    if (argc == 1)
        return (1);
	argv++;
    array = validate_array(argv, argc);
	print_array(array);
    return (0);
}