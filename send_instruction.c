#include "push_swap.h"

void    send_instruction(char *s)
{
    while (*s)
        write(0, s++, 1);
    write(0, "\n", 1);
}