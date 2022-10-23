/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:58:16 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/23 18:58:19 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (0);
	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}
// int main()
// {
//     t_list *head = malloc(sizeof(t_list));
//     head->content = "44";
//     head->next = NULL;

//     t_list *current = malloc(sizeof(t_list));
//     current->content = "33";
//     current->next = NULL;
//     head->next = current;

//     current = malloc(sizeof(t_list));
//     current->content = "22";
//     current->next = NULL;
//     head->next->next = current;
//     t_list *tt = ft_lstlast(head);
//     printf("|%s|", tt->content);
// }
