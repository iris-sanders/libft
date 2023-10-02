#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    int j;

    i = 0;
    j = 0;
    if (dest == src)
        return (dest);
    while (i < n)
        ((unsigned char *)dest)[j++] = ((unsigned char*)src)[i++];
    return (dest);
}

// int main(void)
// {
//     char s [] = "goodbye";
//     char d [] = "hello";

//     printf("my function: %s\n", (char *)ft_memcpy(d, s, 5));
//     printf("og function: %s\n", (char *)memcpy(d, s, 5));
// }