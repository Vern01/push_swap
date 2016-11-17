NAME = push_swap

CCFLAGS = gcc -Wall -Werror -Wextra -g3

OBJ = array_size.o check_duplicate.o exit_msg.o ft_pa.o \
ft_pb.o ft_ra.o ft_rra.o ft_sa.o is_number.o isnumber_array.o \
move_down_array.o move_up_array.o push_to_array.o \
send_instruction.o simplify_array.o to_number.o validate_array.o

$(NAME): $(OBJ)
		$(CCFLAGS) -o $(NAME) main.c $(OBJ)

all: $(NAME)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all