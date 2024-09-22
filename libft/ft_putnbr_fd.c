/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:47:15 by olengua-          #+#    #+#             */
/*   Updated: 2024/09/22 21:47:17 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (fd != 0)
    {
        if (n == -2147483648)
            write(fd, "-2147483648", 11);
        else
        {
            if (n < 0)
            {
                ft_putchar_fd('-', fd);
                n = -n;
            }
            if (n > 9)
            {
                ft_putnbr_fd(n / 10, fd);
                n = n % 10;
            }
            ft_putchar_fd(n + '0', fd);
        }
    }
}
