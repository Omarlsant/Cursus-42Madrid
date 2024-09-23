/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:52:51 by olengua-          #+#    #+#             */
/*   Updated: 2024/09/23 17:52:56 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*point;

	if (lst != 0 && del != 0)
	{
		point = lst[0];
		while (point != 0)
		{
			next = point -> next;
			ft_lstdelone(point, del);
			point = next;
		}
		lst[0] = 0;
	}
}
