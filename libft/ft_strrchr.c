/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:43:11 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/08 19:24:14 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	char	character;

	if (s == NULL)
		return (NULL);
	character = (char)c;
	result = 0;
	while (*s != 0)
	{
		if (*s == character)
			result = ((char *)s);
		s++;
	}
	if (character == '\0')
		return ((char *)s);
	return (result);
}
