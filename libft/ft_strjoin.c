/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:56:01 by olengua-          #+#    #+#             */
/*   Updated: 2024/07/11 09:02:59 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == 0)
		return (0);
	ft_strlcpy(str, s1, len1 + 1);
	ft_strlcat(str, s2, len1 + len2 + 1);
	return (str);
}

/* This function is used to concatenate two or more strings into a 
   single string. This function takes the strings to be joined as 
   parameters and returns a new string that is the combination of 
   all of them.*/

/*int	main(void)
{
	char	*s1 = "Hola, ";
	char	*s2 = "mundo!";
	char	*result;

	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error al unir las cadenas.\n");
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destino;
	size_t	sour;
	size_t	i;

	destino = ft_strlen(dst);
	sour = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (sour);
	while (destino + i < size - 1 && src[i] != '\0')
	{
		dst[destino + i] = src[i];
		i++;
	}
	dst[destino + i] = '\0';
	if (size < destino)
		return (size + sour);
	return (destino + sour);
}*/
