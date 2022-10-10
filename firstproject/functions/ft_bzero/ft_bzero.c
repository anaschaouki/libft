/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:36:38 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/10 17:14:49 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	char *str;
	int null;

	i = 0;
	str = s;
	null = '\0';

	while (i < n)
	{
		str[i] = null;
		i++;
	}
}

int main()
{
	char str[] = "hello";
	int	n = 3;
	ft_bzero(str,n);
	printf("%s\n",str);
	char str1[] = "hello";
	int n1 = 3;
	bzero(str1,n1);
	printf("%s",str1);
	return (0);
}
