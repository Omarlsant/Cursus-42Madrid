/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:33:52 by olengua-          #+#    #+#             */
/*   Updated: 2024/07/11 09:41:37 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	inputlen;

	i = 0;
	inputlen = ft_strlen(s);
	if (start >= inputlen)
		return (ft_strdup(""));
	else if (inputlen - start < len)
		len = inputlen - start;
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (i < len)
	{
		str[i] = s[i + (size_t)start];
		i++;
	}
	str[i] = 0;
	return (str);
}
