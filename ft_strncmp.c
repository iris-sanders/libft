#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char)s1[i] > (unsigned char)s2[i])
            return (1);
        else if ((unsigned char)s1[i] < (unsigned char)s2[i])
            return (-1);
        i++;
    }
    return (0);
}

// int main(int argc, char **argv)
// {
//     // char *s1 = "hallo";
//     // char *s2 = "haalo";
//     // printf("own: %i\n", ft_strncmp(s1, s2, 2));
//     // printf("real: %i\n", strncmp(s1, s2, 2));

//     (void)argc;
//     printf("own: %i\n", ft_strncmp(argv[1], argv[2], 2));
//     printf("real: %i\n", strncmp(argv[1], argv[2], 2));
// }