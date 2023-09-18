#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = '\0';
        i++;
    }
}

// int main(void)
// {
//     size_t i;
//     size_t j;
//     char str [] = "hellogoodbye";
//     char str2 [] = "hellogoodbye";

//     printf("original string: %s\n", str);
//     ft_bzero(str, 5);
//     bzero(str2, 5);

//     i = 0;
//     j = 0;
//     while (i < sizeof(str))
//         printf("modified string, my function: %c\n",str[i++]);
//     while (j < sizeof(str2))
//         printf("modified string, og function: %c\n",str2[j++]);
// }