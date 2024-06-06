/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:58:34 by olengua-          #+#    #+#             */
/*   Updated: 2024/06/06 11:34:25 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*box;
	size_t			i;

	box = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		box[i++] = 0;
	}
}
