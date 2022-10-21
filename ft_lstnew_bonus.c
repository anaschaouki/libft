/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:11:46 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/20 15:11:52 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct s_node {
	int				data;
	struct s_node	*next;
};

// int	nodecount(struct s_node *head)
// {
// 	int count = 0;
// 	if (head == NULL)
// 		printf("oof");
// 	struct s_node *ptr;
// 	ptr = head;
// 	while (ptr != NULL)
// 	{
// 		count++;
// 		ptr = ptr->next;
// 	}
// 	return (count);

// }
struct s_node	*pass(void *stuff)
{
	struct s_node	*head;

	head = NULL;
	head = (struct s_node *)malloc(sizeof(struct s_node));
	head->data = stuff;
	head->next = NULL;

	struct s_node		*current = malloc(sizeof(struct s_node));
	current->data = 31;
	current->next = NULL;
	head->next = current;

	current = malloc(sizeof(struct s_node));
	current->data = 34;
	current->next = NULL;
	head->next->next = current;
	return (head);
}

int main()
{
	int a = 23;
	int *b = &a;
	struct s_node *o;
	o = pass(b);
	printf("%p",o);
}