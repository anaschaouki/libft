/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <anchaouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:51:20 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/23 18:55:30 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!ptr)
		*lst = new;
	else
	{
		ptr = ft_lstlast(ptr);
		ptr->next = new;
	}
}

// int main()
// {
//     t_list  *head;
//     head = malloc (sizeof(t_list));
//     head->content = "44";

//     t_list  *current;
//     current = malloc(sizeof(t_list));
//     current->content = "55";
//     current->next = NULL;
//     head->next = current;
//     printf("%p\n",head->next);

//     current = malloc(sizeof(t_list));
//     current->content = "66";
//     current->next = NULL;
//     head->next->next = current;
//     // the new fella
//     t_list  *new;
//     new = malloc(sizeof(t_list));
//     new->content = "77";
//     new->next = NULL;
//     ft_lstadd_back(&head, new);
//     printf("%s\n",head->next->next->next->content);
//     printf("%p",head->next);
// }
