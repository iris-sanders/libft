#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    // if memory overlaps copy backwards
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
		return (dest);
	}
    else if (dest < src)
        ft_memcpy(dest, src, n);
	return (dest);
}

// int main(void)
// {
//     char s [] = "goodbye";
//     char d [] = "hello";

//     printf("my function: %s\n", (char *)ft_memmove(d, s, 5));
//     printf("og function: %s\n", (char *)ft_memmove(d, s, 5));
// }