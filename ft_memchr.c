#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((unsigned char *)s + i);
        i++;
    }
    return (NULL);
}

// int main(void)
// {
//     char *s = "hallo";
    
//     printf("%s", (char *)ft_memchr(s, 'a', 2));
// }