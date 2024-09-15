/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:29:31 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/05 20:05:57 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

// Esta es una función que comprueba si un carácter es un dígito (0-9).

/* int main()
{
	char test_chars[] = {'A', 'z', '1', '*', '5', 'n'};
	int i = 0;
	int array_size = sizeof(test_chars) / sizeof(test_chars[0]);

    while (i < array_size) {
        if (ft_isdigit(test_chars[i])) {
            printf("'%c' es un dígito.\n", test_chars[i]);
        } else {
            printf("'%c' no es un dígito.\n", test_chars[i]);
        }
        i++;
    }
    return 0;
} */
