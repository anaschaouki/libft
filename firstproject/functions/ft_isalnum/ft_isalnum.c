/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:49:58 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/06 12:54:04 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(unsigned char c)
{
	if ((c >= 65 && c <= 90) 
			|| (c >= 97 && c <= 122)
			|| (c >= 48 && c <= 57))
	{
		return(1);
	}
	else
		return (0);
}

int main()
{
	unsigned char s = 'Ÿ';
	printf("%d___%d",ft_isalnum(s),isalnum(s));
	return (0);
}	
