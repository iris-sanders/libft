#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

// int main(void)
// {
//     int c;

//     c = 'a';
//     printf("before toupper: %c\n", c);
//     printf("after toupper: %c", ft_toupper(c));
// }