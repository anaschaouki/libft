/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:20:51 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/09 19:12:11 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	const char *string;
	
	i = 0;
	string = str;
	while (string[i] != '\0' && c != '\0' && i < n)
	{
		if (string[i] == c)
			return ((char *)&string[i]);
		i++;
	}
	return (0);
}

int main()
{
	char str[] = "hello";
	char c = 'o';
	int size = 4;
	printf("%s\n",ft_memchr(str,c,size));
	printf("%s",memchr(str,c,size));
	return (0);
}
