/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:56:19 by olengua-          #+#    #+#             */
/*   Updated: 2024/07/09 10:56:40 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	void	*punt;

	punt = malloc(count * size);
	if (punt == NULL)
		return(punt);
	ft_bzero(punt, count * size);
	return (punt);
}
