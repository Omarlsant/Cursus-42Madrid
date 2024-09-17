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
//#include <stdio.h>

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

/* This function is used to find the last occurrence 
   of a character in a string*/

/*int main() {
    const char str[] = "Hola, Copilot!";
    char ch = 'o';
    char *result;
    const char str2[] = "Hola, Copilot!";
    char ch2 = 'u';
    char *result2;

    result = ft_strrchr(str, ch);
    result2 = ft_strrchr(str2, ch2);

    if (result != NULL) {
        printf("El carácter '%c' se encontró en la cadena: %s\n", ch, result);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", ch);
    }
    if (result2 != NULL) {
        printf("El carácter '%c' se encontró en la cadena: %s\n", ch2, result2);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", ch2);
    }
    return 0;
}*/
