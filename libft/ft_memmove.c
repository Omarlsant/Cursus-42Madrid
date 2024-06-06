/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:17:28 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/06 14:29:18 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*part;
	unsigned char	*source;
	size_t			i;

	part = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (part == 0 && source == 0)
		return (0);
	if (src > dest)
	{
		while (i < n)
		{
			part[i] = source[i];
			i++;
		}
	}
	while (i < n)
	{
		part[n - 1] = source[n - 1];
		n--;
	}
	return (dest);
}
