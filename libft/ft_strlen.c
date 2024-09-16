/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:38:27 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/06 11:49:44 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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

// This function is used to calculate the length of a string.

/*int main(void)
{
	const char *str1 = "Hola, mundo!";
	const char *str2 = "";
	const char *str3 = "1234567890";
	const char *str4 = "¡Hola! ¿Cómo estás?";
	const char *str5 = "C es un lenguaje de programación.";

	size_t len1 = ft_strlen(str1);
	size_t len2 = ft_strlen(str2);
	size_t len3 = ft_strlen(str3);
	size_t len4 = ft_strlen(str4);
	size_t len5 = ft_strlen(str5);

	printf("La longitud de la cadena \"%s\" es: %zu\n", str1, len1);
	printf("La longitud de la cadena \"%s\" es: %zu\n", str2, len2);
	printf("La longitud de la cadena \"%s\" es: %zu\n", str3, len3);
	printf("La longitud de la cadena \"%s\" es: %zu\n", str4, len4);
	printf("La longitud de la cadena \"%s\" es: %zu\n", str5, len5);

	return 0;
}*/
