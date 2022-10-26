/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:20:51 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:31:06 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*string;

	if (!n)
		return (0);
	i = 0;
	string = str;
	while (i < n)
	{
		if ((unsigned char)string[i] == (unsigned char)c)
			return ((char *)&string[i]);
		i++;
	}
	return (0);
}
