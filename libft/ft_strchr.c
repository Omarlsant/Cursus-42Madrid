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
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	character;

	character = (char)c;
	while (*s != '\0')
	{
		if (*s == character)
			return ((char *)s);
		s++;
	}
	if (character == '\0')
		return ((char *)s);
	return (0);
}

/* This function is used to find the first occurrence of 
   a character in a string */

/*int main() {
    const char str[] = "Hola, Copilot!";
    char ch = 'i';
    char *result;
    const char str2[] = "Hola, Copilot!";
    char chr = 'u';
    char *result2;

    result = ft_strchr(str, ch);
    result2 = ft_strchr(str2, chr);

    if (result != NULL) {
        printf("El carácter '%c' se encontró en la cadena: %s\n", ch, str);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", ch);
    }

    if (result2 != NULL) {
        printf("El carácter '%c' se encontró en la cadena: %s\n", chr, str2);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", chr);
    }
    return 0;
}*/
