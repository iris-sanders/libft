#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

// int main (void)
// {
//     printf("my function: %i\n", ft_isdigit('0'));
//     printf("og function: %i\n", isdigit('0'));
// }