/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:54:06 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/23 18:54:11 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void freeme(void *node)
// {
//     free(node);
// }
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst)
		return ;
	ptr = *lst;
	while (*lst != NULL)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}

// int main(void)
// {
//     t_list  *head;
//     head = malloc(sizeof(t_list));
//     head->content = ft_strdup("33");
//     head->next = NULL;

//     t_list  *current;
//     current = malloc(sizeof(t_list));
//     current->content = ft_strdup("44");
//     current->next = NULL;
//     head->next = current;

//     current = malloc(sizeof(t_list));
//     current->content = ft_strdup("55");
//     current->next = NULL;
//     head->next->next= current;
//     // aaa
//     t_list *ptr;
//     ptr = head;
//     ft_lstclear(&head, freeme);
//     printf("%p",head);
//     // while(ptr)
//     // {
//     //     printf("|%p| ", ptr);
//     //     ptr = ptr->next;
//     // }
// }
