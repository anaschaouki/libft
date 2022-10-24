/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:57:59 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/23 18:58:03 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*head;

	newlst = NULL;
	while (lst)
	{
		head = ft_lstnew(f(lst->content));
		if (!head)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&newlst, head);
		lst = lst->next;
	}
	return (newlst);
}
