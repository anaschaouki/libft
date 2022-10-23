/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:24:15 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/23 20:24:18 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main ()
// {
//     t_list *head;
//     // int pn = 34;
//     // void *pp = &pn;
//     head = ft_lstnew("44");
//     printf("%s\n", head->content);
//     // printf("%d\n", pn);
//     // printf("%p", &pn);
// }
