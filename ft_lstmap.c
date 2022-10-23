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

// // FREE FOR THE DEL FUNC
// void freeme(void *node)
// {
// 	free(node);
// }
// // FUNC FOR FUNCTION F
// void *func(void *node)
// {
// 	int i = 0;
// 	while (((char *)node)[i])
// 	{
// 		((char *)node)[i] = 'o';
// 		i++;
// 	}
// 	return (node);
// }
// // THE OG FUNC
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
// THE MAIN FUNC 
// int main(void)
// {
// 	t_list	*head;
// 	char s1[] = "o2";
// 	char s2[] = "o3";
// 	char s3[] = "o4";

// // first node
// 	head = malloc(sizeof(t_list));
// 	head->content = s1;
// 	head->next = NULL;

// 	// second node
// 	t_list	*current;
// 	current = malloc(sizeof(t_list));
// 	current->content =s2;
// 	current->next = NULL;
// 	head->next = current;

// 	// third node
// 	current = malloc(sizeof(t_list));
// 	current->content = s3;
// 	current->next = NULL;
// 	head->next->next = current;
// 	t_list *ptr1 = head;
// 	while (ptr1)
// 	{
// 		printf("%s\n",ptr1->content);
// 		ptr1 = ptr1->next;
// 	}
// 	ft_lstmap(head, func, freeme);
// 	t_list *ptr = head;
// 	while (ptr)
// 	{
// 		printf("%s\n",ptr->content);
// 		ptr = ptr->next;
// 	}
// 	while(1)
// 	{

// 	}
// }
