/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:36:38 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/09 14:18:31 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	char *str;
	char *null;

	i = 0;
	str = s;
	null = "0";

	while (i < n)
	{
		str[i] = *null;
		i++;
	}
}

int main()
{
	char str[] = "hello";
	int	n = 3;
	ft_bzero(str,n);
	printf("%s",str);
	return (0);
}



