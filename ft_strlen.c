#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
// int main(void)
// {
//     printf("my function: %lu\n", ft_strlen("hallo"));
//     printf("my function: %lu\n", strlen("hallo"));
// }