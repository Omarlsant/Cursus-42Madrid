/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:04:09 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/04 23:27:54 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*str;
	size_t	count;

	if (dest == 0 && src == 0)
		return (0);
	dst = (char *)dest;
	str = (char *) src;
	count = 0;
	while (count < n)
	{
		dst[count] = str[count];
		count++;
	}
	return (dest);
}
