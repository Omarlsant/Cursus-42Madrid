/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:40:20 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/14 16:35:55 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

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
}

/* This function is used to concatenate a string from
   ‘src’ to the end of ‘dst’, ensuring that the 
   resulting string in ‘dst’ is null-terminated and 
   does not overflow. */

/*int main() {
    char src[] = " Copilot!";
    char dest[20] = "Hola,";

    size_t total_length = ft_strlcat(dest, src, sizeof(dest));

    printf("Fuente: %s\n", src);
    printf("Destino: %s\n", dest);
    printf("Longitud total: %zu\n", total_length);

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
