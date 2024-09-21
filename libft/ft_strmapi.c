/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:50:19 by olengua-          #+#    #+#             */
/*   Updated: 2024/09/11 21:01:09 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*str;

	if (s == 0 || f == 0)
		return (0);
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	str[len] = 0;
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

/* This function is used to apply a given function to each 
   character of a string, generating a new string with the 
   results. The function that is applied takes two arguments: 
   the index of the character in the original string and 
   the character itself */

/*int main(void)
{
    char *str = "Hello, World!";
    char *result;

    // Llamada a ft_strmapi con la función auxiliar
    result = ft_strmapi(str, my_function);

    if (result)
    {
        printf("Original: %s\n", str);
        printf("Modified: %s\n", result);
        free(result); // Liberar la memoria asignada
    }
    else
    {
        printf("Error: Memory allocation failed.\n");
    }

    return 0;
}*/