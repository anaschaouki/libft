/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:00:51 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/14 10:54:16 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	if (n == 0 && i == 0)
		i++;
	return (i);
}

static char	*convert(long n, int len)
{
	char	*alloc;

	alloc = (char *)malloc(sizeof(char) * len + 1);
	if (!alloc)
		return (0);
	alloc[len] = '\0';
	if (n < 0)
	{
			n *= -1;
			alloc[0] = '-';
	}
	while (n > 9)
	{
		alloc[--len] = (n % 10) + 48;
		n /= 10;
	}
	if (n >= 0 && n < 10)
		alloc[--len] = (n % 10) + 48;
	return (alloc);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = length((long)n);
	str = convert((long)n, len);
	return (str);
}
