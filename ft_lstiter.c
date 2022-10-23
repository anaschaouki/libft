/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:52:25 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/23 18:52:29 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void fill(void *node)
// {
// 	int i = 0;
// 	while(((char *)node)[i])
// 	{
// 		((char *)node)[i] = '5';
// 		i++;
// 	}
// }
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main()
// {
// 	t_list *head;
// 	char s[] = "33";
// 	head = malloc(sizeof(t_list));
// 	head->content = s;
// 	head->next = NULL;

// 	t_list	*current;
// 	current = malloc(sizeof(t_list));
// 	char s2[] = "44";
// 	current->content = s2;
// 	current->next = NULL;
// 	head->next = current;

// 	char s3[] = "55";
// 	current = malloc(sizeof(t_list));
// 	current->content =  s3;
// 	current->next = NULL;
// 	head->next->next = current;
// 	t_list *ptr = head;
// 	ft_lstiter(head, fill);
// 	while(ptr)
// 	{
// 		printf("%s\n",ptr->content);
// 		ptr = ptr->next;
// 	}
// 	return (0);
// }
