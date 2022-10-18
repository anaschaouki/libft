/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:06:39 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:24:59 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, num * size);
	return (ptr);
}

// int main()
// {
// 	int i;
// 	i = 0;
//     int *ptr;
//     ptr = ft_calloc(5,sizeof(char));
// 	while (i < 5)
// 	{
// 		printf("%d",ptr[i]);
// 		i++;
// 	}
//     return (0);
// }
