#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

// int main(void)
// {
//     int c;

//     c = 'A';
//     printf("before tolower: %c\n", c);
//     printf("after tolower: %c", ft_tolower(c));
// }