/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:56:19 by olengua-          #+#    #+#             */
/*   Updated: 2024/07/09 10:56:40 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*punt;

	punt = malloc(nmemb * size);
	if (punt == NULL)
		return (punt);
	ft_bzero(punt, nmemb * size);
	return (punt);
}

//This function is used to allocate dynamic memory (heap) and 
//ensures that all allocated memory is initialized to zero.

/*int main() {
    int *arr;
    size_t num_elements = 10;
    size_t element_size = sizeof(int);

    arr = (int *)ft_calloc(num_elements, element_size);
    if (arr == NULL) {
        printf("Error al asignar memoria\n");
        return 1;
    }
    for (size_t i = 0; i < num_elements; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}

void ft_bzero(void *s, size_t n)
{
    unsigned char *box;
    size_t i;

    box = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        box[i++] = 0;
    }
}*/
