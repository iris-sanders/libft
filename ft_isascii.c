#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

// int main(void)
// {
//     printf("my function: %i\n", ft_isascii(128));
//     printf("og function: %i\n", isascii(128));
// }