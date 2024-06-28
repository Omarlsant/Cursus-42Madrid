/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 23:15:32 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/28 23:32:37 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*memblock1;
	const char	*memblock2;
	size_t		i;

	memblock1 = (const char *)s1;
	memblock2 = (const char *)s2;
	i = 0;
	while (i < n)
	{
		if (memblock1[i] != memblock2[i])
			return ((unsigned char)memblock1[i] - (unsigned char)memblock2[i]);
		i++;
	}
	return (0);
}
