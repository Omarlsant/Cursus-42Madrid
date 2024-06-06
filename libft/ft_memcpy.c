/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:04:09 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/06 14:17:34 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*part;
	char	*source;
	size_t	i;

	if (dest == 0 && src == 0)
		return (0);
	part = (char *)dest;
	source = (char *) src;
	i = 0;
	while (i < n)
	{
		part[i] = source[i];
		i++;
	}
	return (dest);
}
