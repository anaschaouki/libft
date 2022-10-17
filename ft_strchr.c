/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:10:41 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:39:29 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (i != ft_strlen(str) + 1)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (str == '\0')
	{
		str = "\0";
		return ((char *)str);
	}
	return (0);
}
// int main()
// {
// 	char string[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char s = '\0';
// 	printf("%s\n",ft_strchr(string,s));
// 	printf("%s",strchr(string,s));
// 	return (0);
//  }
