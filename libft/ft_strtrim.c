/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 09:08:10 by olengua-          #+#    #+#             */
/*   Updated: 2024/07/12 09:16:30 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (s1 == 0 || set == 0)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != 0 && ft_strchr(set, s1[start] != 0))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1] != 0))
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
