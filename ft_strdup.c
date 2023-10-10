#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *s2;
    int len;

    len = ft_strlen(s1) +1; //strlen doesnt include '\0'
    s2 = ft_calloc(len, sizeof(char));
    if (!s2)
        return (NULL);
    ft_strlcpy(s2, s1, len);
    return (s2);
}