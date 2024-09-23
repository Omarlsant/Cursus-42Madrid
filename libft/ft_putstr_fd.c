/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:26:25 by olengua-          #+#    #+#             */
/*   Updated: 2024/09/22 21:26:27 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd != 0 && s != 0)
	{
		write(fd, s, ft_strlen(s));
	}
}

/* Writes the string s to the specified file descriptor fd. */