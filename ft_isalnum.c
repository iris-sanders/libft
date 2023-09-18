#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}

// int main(void)
// {
//     printf("my function: %i\n", ft_isalnum('1'));
//     printf("og function: %i", isalnum('1'));
// }