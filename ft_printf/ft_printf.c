/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:30:13 by olengua-          #+#    #+#             */
/*   Updated: 2024/10/06 18:37:07 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define HEXA "0123456789ABCDEF"
#define HEXA_MIN "0123456789abcdef"

static int	ft_conversion2(char conv, va_list arg)
{
	int	len;

	len = 0;
	if (conv == 'x')
		len = ft_putnbr_base(va_arg(arg, unsigned int), HEXA_MIN, 16);
	else if (conv == 'X')
		len = ft_putnbr_base(va_arg(arg, unsigned int), HEXA, 16);
	else if (conv == '%')
		len = ft_putchar('%');
	return (len);
}

static int	ft_conversion(char conv, va_list arg)
{
	int		len;
	void	*p;

	len = 0;
	if (conv == 'c')
		len = ft_putchar(va_arg(arg, int));
	else if (conv == 's')
		len = ft_putstr(va_arg(arg, char *));
	else if (conv == 'p')
	{
		p = va_arg(arg, void *);
		if (p == 0)
			len = ft_putstr("(nil)");
		else
			len = ft_printf("0x")
				+ft_putnbr_base_p((unsigned long)p, HEXA_MIN, 16);
	}
	else if (conv == 'd' || conv == 'i')
		len = ft_putnbr_base(va_arg(arg, int), "0123456789", 10);
	else if (conv == 'u')
		len = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789", 10);
	else
		len = ft_conversion2(conv, arg);
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		cont;
	int		len;
	va_list	varg;

	va_start(varg, str);
	cont = 0;
	len = 0;
	while (str[cont] != 0)
	{
		if (str[cont] == '%')
		{
			cont++;
			len = len + ft_conversion(str[cont++], varg);
		}
		else
		{
			len = len + ft_putchar(str[cont++]);
		}
	}
	va_end(varg);
	return (len);
}
