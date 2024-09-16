/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:41:16 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/06 12:06:06 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*box;
	size_t			i;

	box = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		box[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// This function sets the first 'n' bytes of the memory area 
// pointed to by 's' with the constant value 'c'.

/*int main(void)
{
    char bufferA[20];
    char bufferB[16];

    ft_memset(bufferA, 'A', sizeof(bufferA) - 1);
    bufferA[19] = '\0';
    ft_memset(bufferB, 'B', sizeof(bufferB) - 1);
    bufferB[15] = '\0';

    printf("Buffer después de ft_memset: %s\n", bufferA);
    printf("Buffer después de ft_memset: %s\n", bufferB);

    return 0;
}*/
