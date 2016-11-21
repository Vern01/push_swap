#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

int		array_size(int	*array);
int     *check_duplicate(int *array, int size);
int		check_smallest(int	**array, int **help, int size);
int		check_swap(int **array);
int		*create_help(int size);
void    exit_msg(char *s);
void	finalize_stack(int **array, int **help);
void    ft_pa(int **a, int **b);
void    ft_pb(int **a, int **b);
int		ft_ra(int **array);
int		ft_rra(int **array);
void	ft_sa(int **array);
int		get_min(int *array);
int		is_lower_half(int *array, int size);
int		is_number(char *s);
int     *isnumber_array(char **array, int size);
void    move_down_array(int **array);
void    move_up_array(int **array);
void	print_array(int *array);
void    push_to_array(int **array, int value);
void	rotate_stack(int **array, int size);
void    send_instruction(char *s);
int     *simplify_array(int *array, int *sorted, int size);
void	solve_stack(int **array, int **help, int size);
int		stack_ordered(int **array);
int     to_number(char *s);
int     *validate_array(char **array, int size);

#endif
