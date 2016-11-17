#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

int		array_size(int	*array);
int     *check_duplicate(int *array, int size);
void    exit_msg(char *s);
void    ft_pa(int **a, int **b);
void    ft_pb(int **a, int **b);
void    ft_ra(int **array);
void    ft_rra(int **array);
void	ft_sa(int **array);
int     is_number(char *s);
int     *isnumber_array(char **array, int size);
void    move_down_array(int **array);
void    move_up_array(int **array);
void    push_to_array(int **array, int value);
void    send_instruction(char *s);
int     *simplify_array(int *array, int *sorted, int size);
int     to_number(char *s);
int     *validate_array(char **array, int size);

#endif