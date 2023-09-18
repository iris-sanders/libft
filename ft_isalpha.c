#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

// int main(void)
// {
//     printf("my function: %i\n", ft_isalpha('1'));
//     printf("og function: %i", isalpha('1'));
// }