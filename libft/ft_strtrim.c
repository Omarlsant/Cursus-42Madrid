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
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (s1 == 0 || set == 0)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != 0 && ft_strchr(set, s1[start]) != 0)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != 0)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}

/* This function is used to remove the characters specified
   in the set from the beginning and the end of a string (s1). 
   It is used in cases where it is necessary to clean a string 
   of unwanted characters, such as whitespace, line breaks, or 
   other specific characters at the beginning and end of 
   the string */

/*int	main(void)
{
	char	*s1 = "   Hola, mundo!   ";
	char	*set = "  ";
	char	*result;

	printf("Cadena original: '%s'\n", s1);
	result = ft_strtrim(s1, set);
	if (result)
	{
		printf("Resultado: '%s'\n", result);
		free(result);
	}
	else
	{
		printf("Error al recortar la cadena.\n");
	}
	return (0);
}*/
