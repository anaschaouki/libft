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

int	nodecount(struct s_node *head)
{
	int count = 0;
	if (head == NULL)
		printf("oof");
	struct s_node *ptr;
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);

}
int	main()
{
	struct s_node	*head;

	head = NULL;
	head = (struct s_node *)malloc(sizeof(struct s_node));
	head->data = 25;
	head->next = NULL;

	struct s_node		*current = malloc(sizeof(struct s_node));
	current->data = 26;
	current->next = NULL;
	head->next = current;

	current = malloc(sizeof(struct s_node));
	current->data = 99;
	current->next = NULL;
	head->next->next = current;

	printf("%d",nodecount(head));
}
