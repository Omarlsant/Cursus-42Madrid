/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:06:50 by olengua-          #+#    #+#             */
/*   Updated: 2024/09/13 18:09:09 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* This function is used to apply a specific operation to 
   each character of a string, also using the index of the 
   current character in the operation. This can be useful 
   for performing transformations or manipulations on each
   character of the string, taking into account its 
   position within the string.
*/

/*int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

void	to_uppercase(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}

int	main(void)
{
	char str[] = "hola, mundo!";
	
	printf("Cadena original: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Cadena modificada: %s\n", str);
	
	return 0;
}*/
