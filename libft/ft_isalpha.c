/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 09:55:38 by olengua-          #+#    #+#             */
/*   Updated: 2024/09/14 16:43:29 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/*Esta es una función que comprueba si un caractér es una letra del alfabeto.

int main() {
    char test_chars[] = {'A', 'z', '1', '*', 'M', 'n'};
    int i = 0;
    int array_size = sizeof(test_chars) / sizeof(test_chars[0]);

    while (i < array_size) {
        if (ft_isalpha(test_chars[i])) {
            printf("'%c' es una letra.\n", test_chars[i]);
        } else {
            printf("'%c' no es una letra.\n", test_chars[i]);
        }
        i++;
    }

    return 0;
}*/