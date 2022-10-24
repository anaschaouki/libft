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
