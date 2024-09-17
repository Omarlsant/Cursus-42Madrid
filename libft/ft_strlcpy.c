/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:29:09 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/08 19:39:03 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

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

/* This function is used to copy a string from ‘src’ to 
   ‘dst’, ensuring that the resulting string in ‘dst’ 
   is null-terminated and does not overflow. */

/*int main() {
    char src[] = "Hola, Copilot!";
    char dest[20];

    size_t copied = ft_strlcpy(dest, src, sizeof(dest));

    printf("Fuente: %s\n", src);
    printf("Destino: %s\n", dest);
    printf("Longitud copiada: %zu\n", copied);

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
}*/
