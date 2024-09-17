/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:49:55 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/05 20:51:22 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}

/* This function is used to convert an uppercase 
   character to its lowercase equivalent*/

/*int main() {
    char str[] = "HOLA, COPILOT!";
    int i = 0;

    while (str[i]) {
        str[i] = ft_tolower(str[i]);
        i++;
    }

    printf("Cadena convertida: %s\n", str);
    return 0;
}*/
