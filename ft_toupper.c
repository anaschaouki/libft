/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:34:53 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/06 19:58:18 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	 if(c >= 97 && c <= 122)
		 c -= 32;
	 return(c);
}

int main()
{
	char s = 'L';
	printf("%c___%c",ft_toupper(s),toupper(s));
	return (0);
}
