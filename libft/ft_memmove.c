/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:17:28 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/06 14:29:18 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*part;
	unsigned char	*source;
	size_t			i;

	part = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (part == 0 && source == 0)
		return (0);
	if (src > dest)
	{
		while (i < n)
		{
			part[i] = source[i];
			i++;
		}
	}
	while (i < n)
	{
		part[n - 1] = source[n - 1];
		n--;
	}
	return (dest);
}

//This function is used to copy a block of memory from one 
//location to another, correctly handling memory overlaps.

/*int main() {
    char src[] = "Hola, Copilot!";
    char dest[20];

    ft_memmove(dest, src, strlen(src) + 1);

    printf("Fuente: %s\n", src);
    printf("Destino: %s\n", dest);

    char overlap[] = "1234567890";
    ft_memmove(overlap + 4, overlap, 6);
    printf("Superposición: %s\n", overlap);

    return 0;
}*/