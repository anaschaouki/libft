/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:52:48 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/06 20:04:32 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

unsigned char	ft_tolower(unsigned char c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

int main()
{
	char s = 'x';
	printf("%c___%c",ft_tolower(s),tolower(s));
	return (0);
}

