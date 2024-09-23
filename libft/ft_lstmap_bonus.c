/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olengua- <olengua-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:54:21 by olengua-          #+#    #+#             */
/*   Updated: 2024/09/23 18:00:34 by olengua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listnew;
	t_list	*point;
	void	*buffer;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	listnew = 0;
	while (lst != 0)
	{
		buffer = f(lst -> content);
		point = ft_lstnew(buffer);
		if (point == 0)
		{
			del(buffer);
			ft_lstclear(&listnew, del);
			return (0);
		}
		ft_lstadd_back(&listnew, point);
		lst = lst -> next;
	}
	return (listnew);
}
