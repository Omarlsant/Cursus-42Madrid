/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:40:20 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/04 23:46:36 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	cont;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	cont = 0;
	if (size == 0)
		return (srclen);
	while (dstlen + cont < size - 1 && src[cont] != '\0')
	{
		dst[dstlen + cont] = src[cont];
		cont++;
	}
	dst[dstlen + cont] = '\0';
	if (size < dstlen)
		return (size + srclen);
	return (dstlen + srclen);
}
