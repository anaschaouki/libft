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
	if (!n)
		return(0);
	size_t		i;
	const char	*string;

	i = 0;
	string = str;
	while ( i < n)
	{
		if (string[i] == c)
			return ((char *)&string[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str[] = "hello";
// 	char c = 'o';
// 	int size = 4;
// 	printf("%s\n",ft_memchr(str,c,size));
// 	printf("%s",memchr(str,c,size));
// 	return (0);
// }
