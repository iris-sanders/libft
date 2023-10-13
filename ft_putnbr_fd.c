/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: irsander <irsander@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 11:24:32 by irissanders   #+#    #+#                 */
/*   Updated: 2023/10/13 10:21:00 by irissanders   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{    
    if (n < 0)
    {   
        ft_putchar_fd('-', fd);
        n = -n;
    }
    else if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    ft_putchar_fd(n + '0', fd);    
}