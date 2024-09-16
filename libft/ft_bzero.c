/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:58:34 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/06 11:34:25 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*box;
	size_t			i;

	box = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		box[i++] = 0;
	}
}

// Sets the first 'n' bytes of the memory area pointed to by 's' to zero.

/*int main(void)
{
    char buffer[12] = {'1', '1', '1', '1', '1', '1', '1', 
	'1', '1', '1', '1', '1'};

    printf("Buffer antes de bzero: %s\n", buffer);

    bzero(buffer, sizeof(buffer));

    printf("Buffer después de bzero: ");
    for (int i = 0; i < sizeof(buffer); i++)
    {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}*/
