/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:17:28 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/05 20:47:22 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	i = 0;
	if (a == 0 && b == 0)
		return (0);
	if (src > dest)
	{
		while (i < n)
		{
			a[i] = b[i];
			i++;
		}
	}
	while (i < n)
	{
		a[n - 1] = b[n - 1];
		n--;
	}
	return (dest);
}
