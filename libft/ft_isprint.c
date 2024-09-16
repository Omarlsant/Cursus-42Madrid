/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:56:14 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/05 20:28:42 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// This is a function that checks if the given character
// is a printable character


/*int main()
{
    char test_chars[] = {'A', ' ', '\t', '\n', '!', '~', 0x7F, 0x80};
    int i = 0;
    int array_size = sizeof(test_chars) / sizeof(test_chars[0]);

    while (i < array_size) {
        if (ft_isprint(test_chars[i])) {
            printf("'%c' es un carácter imprimible.\n", test_chars[i]);
        } else {
            printf("'%c' no es un carácter imprimible.\n", test_chars[i]);
        }
        i++;
    }
    return 0;
}*/