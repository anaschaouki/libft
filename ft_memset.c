/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:18:11 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:38:08 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	char str[] = "halloooo";
// 	char rep = 'e';
// 	size_t size = 8;
// 	ft_memset(str,rep,size);
// 	printf("%s",str);
// 	return (0);
// }
