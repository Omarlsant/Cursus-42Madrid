/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:40:20 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/14 16:35:55 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destino;
	size_t	sour;
	size_t	i;

	destino = ft_strlen(dst);
	sour = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (sour);
	while (destino + i < size - 1 && src[i] != '\0')
	{
		dst[destino + i] = src[i];
		i++;
	}
	dst[destino + i] = '\0';
	if (size < destino)
		return (size + sour);
	return (destino + sour);
}
