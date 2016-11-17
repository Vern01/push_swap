#include "push_swap.h"

int     to_number(char *s)
{
    int     op;
    int     ans;

    op = 1;
    if (*s == '-' || *s == '+')
        if (*s++ == '-')
            op = -1;
    ans = 0;
    while (*s)
    {
        ans *= 10;
        ans = ans + (*s++ - '0');
    }
    return (ans * op);
}