#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t destsize)
{
    size_t	dest_i;
	size_t	src_i;
	size_t	i;

	dest_i = ft_strlen(dest);
	src_i = ft_strlen(src);
	if (dest_i >= destsize)
		return (destsize + src_i);
	i = 0;
	while (src[i] && dest_i < (destsize -1))
	{
		dest[dest_i] = src[i];
		dest_i++;
		i++;
	}
	dest[dest_i] = '\0';
	return (dest_i - i + src_i);
}