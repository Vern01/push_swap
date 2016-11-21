#include "push_swap.h"

void    send_instruction(char *s)
{
    while (*s)
        write(1, s++, 1);
    write(1, "\n", 1);
}