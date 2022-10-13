/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:00:51 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/13 19:34:54 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	length(int n)
{
	int i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}

	while (i < n)
	{
		n / 10;
		i++;
	}
	return (i);
}

char	*convert(int n, int len)
{
	int i = 0;
	char *alloc = (char *)malloc(sizeof(char) *len);

	if (n > 0 && n < 9)
	{
		alloc[i] = n;
		i++;
	}
	if (n > 9)
	{
		convert(n / 10);
		convert(n % 10);
	}

	return (alloc);
}




char	*ft_itoa(int n)
{
	size_t	len;
	char	*alloc;
	size_t i;

	len = length(n);
	char *str = convert(n, len);
	return (alloc);
}

int main()
{
	int num = 123;
	printf("%s",ft_itoa(num));
	return (0);
}
