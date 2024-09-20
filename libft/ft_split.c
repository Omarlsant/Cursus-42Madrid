/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:46:57 by olengua-          #+#    #+#             */
/*   Updated: 2024/07/16 12:01:17 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void	liberate(char **matriz, int nstr)
{
	while (nstr-- > 0)
		free(matriz[nstr]);
	free(matriz);
}

static char	**ft_split2(char const *s, char c, char **matriz, size_t len)
{
	size_t	checkpoint;
	size_t	i;
	int		nstr;

	nstr = 0;
	i = 0;
	checkpoint = 0;
	while (i < len)
	{
		if (s[i] != c)
		{
			checkpoint = i;
			while (s[i] != c && s[i] != 0)
				i++;
			matriz[nstr] = ft_substr(s, checkpoint, i - checkpoint);
			if (matriz[nstr++] == 0)
			{
				liberate(matriz, nstr - 1);
				return (0);
			}
		}
		i++;
	}
	matriz[nstr] = 0;
	return (matriz);
}

static int	ft_strwords(char const *s, char c)
{
	int	palabras;
	int	len;
	int	i;

	palabras = 0;
	len = ft_strlen(s);
	i = 1;
	if (s[0] != c && s[0] != 0)
		palabras++;
	while (i < len)
	{
		if (s[i] != c && s[i - 1] == c)
			palabras++;
		i++;
	}
	return (palabras);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	size_t	len;

	len = ft_strlen(s);
	matriz = malloc((ft_strwords(s, c) + 1) * sizeof (char *));
	if (matriz)
		return (ft_split2(s, c, matriz, len));
	return (0);
}

/* This function is used to split a string (s) into an array 
   of substrings using a specific delimiter (c). It is used in 
   cases where it is necessary to separate a string into smaller 
   parts, such as splitting a list of words separated by 
   commas, spaces, or other delimiter characters.*/

/*int main()
{
	char **result;
	int i;

	result = ft_split("Hola,esto,es,una,prueba", ',');
	if (result)
	{
		i = 0;
		while (result[i] != 0)
		{
			printf("result[%d] = %s\n", i, result[i]);
			i++;
		}
		liberate(result, i);
	}
	return 0;
}*/
