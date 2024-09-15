/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:34:30 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/05 20:12:42 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}

// Esta es una función que comprueba si un caractér es 
//alfanumérico (número o letra).

/* int main()
{
    char test_chars[] = {'/', '$', '1', '*', '5', 'n'};
    int i = 0;
    int array_size = sizeof(test_chars) / sizeof(test_chars[0]);

    while (i < array_size) {
        if (ft_isalnum(test_chars[i])) {
            printf("'%c' es un carácter alfanumérico.\n", test_chars[i]);
        } else {
            printf("'%c' no es un carácter alfanumérico.\n", test_chars[i]);
        }
        i++;
    }
    return 0;
} */