/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:41:22 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/14 16:41:45 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	character;

	character = (char)c;
	while (*s != '\0')
	{
		if (*s == character)
			return ((character *)s);
		s++;
	}
	if (character == '\0')
		return ((character *)s);
	return (0);
}
