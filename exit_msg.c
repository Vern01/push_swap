#include "push_swap.h"

void    exit_msg(char *s)
{
    while (*s)
        write(1, s++, 1);
    write(1, "\n", 1);
    exit(1);
}