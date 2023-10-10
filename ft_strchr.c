#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != (char)c)
    {
        if (s[i] == '\0')
            return (NULL);
        i++;
    }
    return ((char *)s + i);
}

// int main(void)
// {
//     char *s = "hallo";
    
//     printf("%s", ft_strchr(s, 'a'));
// }