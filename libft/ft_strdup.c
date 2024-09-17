/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:26:38 by olengua-          #+#    #+#             */
/*   Updated: 2024/08/19 14:34:19 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// This function is used to duplicate a string.

/*int main() {
    const char src[] = "Hola, Copilot!";
    char *dest;

    dest = ft_strdup(src);

    if (dest != NULL) {
        printf("Fuente: %s\n", src);
        printf("Duplicado: %s\n", dest);
        free(dest);
    } else {
        printf("Error al duplicar la cadena.\n");
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
