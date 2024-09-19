/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 23:42:43 by olengua-          #+#    #+#             */
/*   Updated: 2024/07/04 11:41:26 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*strbig;
	size_t	lenmatch;
	size_t	litlen;
	size_t	i;

	i = 0;
	strbig = (char *)big;
	litlen = ft_strlen(little);
	if (litlen == 0 || big == little)
		return (strbig);
	while (strbig[i] != '\0' && i < len)
	{
		lenmatch = 0;
		while (strbig[i + lenmatch] != '\0' && little[lenmatch] != '\0'
			&& strbig[i + lenmatch] == little[lenmatch] && i + lenmatch < len)
			lenmatch++;
		if (lenmatch == litlen)
			return (strbig + i);
		i++;
	}
	return (0);
}

/* This function is used to search for a substring 
   within a string, but only in the first len characters 
   of the main string.*/

/*int main() {
    const char big[] = "Hello, world!";
    const char little[] = "";
    char *result = ft_strnstr(big, little, strlen(big));
    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - big);
        printf("Visual representation:\n");
        for (size_t i = 0; i < strlen(big); i++) {
            if (i == (result - big)) {
                printf("[");
            }
            printf("%c", big[i]);
            if (i == (result - big) + strlen(little) - 1) {
                printf("]");
            }
        }
        printf("\n");
    } else {
        printf("Substring not found\n");
    }
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
