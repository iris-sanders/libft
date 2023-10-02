#include "libft.h"

size_t ft_strlcpy(char *dest, char *src, size_t destsize)
{
	size_t i;

	i = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (i < (destsize -1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
//     char s [] = "goodbye";
//     char d [] = "hello";
//     char s2 [] = "goodbye";
//     char d2 [] = "hello";

//     ft_strlcpy(d, s, sizeof(d));
//     printf("%s\n", d);

//     strlcpy(d2, s2, sizeof(d2));
//     printf("%s\n", d2);
// }