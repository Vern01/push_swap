#include "push_swap.h"

int     is_number(char *s)
{
    if (*s == '-' || *s == '+')
        if (*s == '-')
            s++;
    while (*s)
    {
        if ((*s - '0') < 0 || (*s - '0') > 9)
            return (0);
        s++;
    }
    return (1);
}