/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:41:16 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/06 12:06:06 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*box;
	size_t			i;

	box = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		box[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
