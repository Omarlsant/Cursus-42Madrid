/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:49:45 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/05 20:15:09 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// Esta es una función que comprueba si el caracter se puede
// representar por valores ASCII

/*int main()
{
    char test_chars[] = {'A', 0xF1, 'z', '*', 'n', 0xE9};
    int i = 0;
    int array_size = sizeof(test_chars) / sizeof(test_chars[0]);

    while (i < array_size) {
        if (ft_isascii(test_chars[i])) {
            printf("'%c' es un carácter ASCII.\n", test_chars[i]);
        } else {
            printf("'%c' no es un carácter ASCII.\n", test_chars[i]);
        }
        i++;
    }
    return 0;
}*/