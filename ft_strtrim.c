/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:19:04 by irissanders       #+#    #+#             */
/*   Updated: 2023/10/12 09:47:44 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    
    int start;
    int end;

    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > 0 && ft_strrchr(set, s1[end]))
        end--;
    return (ft_substr(s1, start, end - start +1));
}

// int main(void)
// {
//     char s1[] = "hellogoodbyehello";
//     char *set = "hello";

//     printf("%s\n", ft_strtrim(s1, set));
// }