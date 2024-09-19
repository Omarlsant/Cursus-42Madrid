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
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

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

/* This function is used to extract a substring from a 
   main string. Obtain a substring from the string ‘s’, 
   starting at the index ‘start’ and with a maximum 
   length of ‘len’ characters.*/

/*int main() {
    const char *str = "Hello, world!";
    char *substr1 = ft_substr(str, 7, 5);
    char *substr2 = ft_substr(str, 0, 5);
    char *substr3 = ft_substr(str, 13, 5);

    printf("Original string: '%s'\n", str);
    printf("Substring (start=7, len=5): '%s'\n", substr1);
    printf("Substring (start=0, len=5): '%s'\n", substr2);
    printf("Substring (start=13, len=5): '%s'\n", substr3);

    free(substr1);
    free(substr2);
    free(substr3);
    return 0;
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

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}*/
