#include "push_swap.h"

int		*create_help(int size)
{
	int		i;
	int		*help;

	if (!(help = (int *)malloc(sizeof(int) * (size / 2 + 1))))
		exit_msg("Malloc error: create_help.c");
	i = -1;
	while (++i < (size / 2 + 1))
		help[i] = 0;
	return (help);
}