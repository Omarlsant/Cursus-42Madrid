/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:41:22 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/05 21:46:17 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cchar;

	cchar = (char)c;
	while (*s != '\0')
	{
		if (*s == cchar)
			return ((cchar *)s);
		s++;
	}
	if (cchar == '\0')
		return ((cchar *)s);
	return (0);
}
