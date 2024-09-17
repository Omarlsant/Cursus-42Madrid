/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:48:55 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/22 10:19:09 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	if (n == 0)
		return (0);
	cont = 0;
	while (cont < n)
	{
		if (s1[cont] != s2[cont])
			return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
		else if (s1[cont] == '\0' && s2[cont] == '\0')
			return (0);
		cont++;
	}
	return (0);
}

/* This function is used to compare the first n characters of two strings */

/*int main() {
    // 1. Comparación de caracteres nulos
    const char str1[] = "Hola, Copilot!";
    const char str2[] = "Hola, Mundo!";
    size_t n1 = 6;
    int result1 = ft_strncmp(str1, str2, n1);
    printf("Comparación de caracteres nulos:\n");
    printf("Resultado: %d\n", result1);

    // 2. Comparación de caracteres con diferentes codificaciones
    const char str3[] = "Hola, Copilot!";
    const char str4[] = "Hola, Cópilot!";
    size_t n2 = 15;
    int result2 = ft_strncmp(str3, str4, n2);
    printf("Comparación de caracteres con diferentes codificaciones:\n");
    printf("Resultado: %d\n", result2);

    // 3. Uso de tamaño n mayor que la longitud de las cadenas
    const char str5[] = "Hola";
    const char str6[] = "Hola, Copilot!";
    size_t n3 = 20;
    int result3 = ft_strncmp(str5, str6, n3);
    printf("Uso de tamaño n mayor que la longitud de las cadenas:\n");
    printf("Resultado: %d\n", result3);

    // 4. Problemas de rendimiento
    const char str7[] = "Hola, Copilot!";
    const char str8[] = "Hola, Copilot!";
    size_t n4 = 1000000; // Un tamaño grande para probar el rendimiento
    int result4 = ft_strncmp(str7, str8, n4);
    printf("Problemas de rendimiento:\n");
    printf("Resultado: %d\n", result4);

    return 0;
}*/
