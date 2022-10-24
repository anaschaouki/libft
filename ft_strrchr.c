/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:44:00 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 21:16:05 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == (unsigned char)c)
		{
			return ((char *)&string[i]);
		}
		i--;
	}
	if (string[i] == 0 && string[i] != c)
		return (0);
	return (0);
}
//  int main()
//  {
//  	char string[] = "the cake is a lie !\0I'm hidden lol\r\n";
//  	char s = ' ';
//  	printf("%s\n",ft_strrchr(string,s));
//  	printf("%s",strrchr(string,s));
//  	return (0);
//  }
