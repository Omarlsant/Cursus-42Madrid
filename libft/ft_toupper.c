/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 23:47:46 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/05 20:50:48 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

/* This function is used to convert a lowercase character 
   to its uppercase equivalent*/

/*int main() {
    char str[] = "Hola, Copilot!";
    int i = 0;

    while (str[i]) {
        str[i] = ft_toupper(str[i]);
        i++;
    }

    printf("Cadena convertida: %s\n", str);
    return 0;
}*/
