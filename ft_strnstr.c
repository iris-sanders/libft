/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:36:03 by irsander          #+#    #+#             */
/*   Updated: 2023/10/10 16:57:37 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char *haystack;
//     const char *needle;

//     haystack = "MZIRIBMZIRIBMZE123";
//     needle = "MZIRIBMZE";
//     printf("%s\n", ft_strnstr(haystack, needle, ft_strlen(needle)));
// }