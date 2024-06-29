/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 23:42:43 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/29 12:58:24 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*strbig;
	size_t	lenmatch;
	size_t	litlen;
	size_t	i;

	i = 0;
	strbig = (char *)big;
	litlen = ft_strlen(little);
	if (litlen == 0 || big == little)
		return (strbig);
	while (strbig[i] != '\0' && i < len)
	{
		lenmatch = 0;
		while (strbig[i + lenmatch] != '\0' && little[lenmatch] != '\0'
			&& strbig[i + lenmatch] == little[lenmatch] && i + lenmatch < len)
			lenmatch++;
		if (lenmatch == litlen)
			return (strbig + i);
		i++;
	}
	return (0);
}
