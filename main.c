#include "push_swap.h"

int     main(int argc, char **argv)
{
    int     *array;
	int		*help;

    if (argc == 1)
        return (1);
	argv++;
    array = validate_array(argv, argc);
	help = create_help(argc);
	print_array(help);
	solve_stack(&array, &help, argc);
	finalize_stack(&array, &help);
	free(array);
	free(help);
    return (0);
}
