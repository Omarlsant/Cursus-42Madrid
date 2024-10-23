/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:37:49 by olengua-          #+#    #+#             */
/*   Updated: 2024/10/23 18:22:04 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr_base(long n, char *base, int lenbase);
int	ft_putchar(char c);
int	ft_strlen_int(const char *str);
int	ft_putstr(char *s);
int	ft_putnbr_base_p(long n, char *base, int lenbase);

#endif
