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
	int	i;

	i = 0;
	while (str[i] != '\0')
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
// 	char string[] = "";
// 	char s = 'e';
// 	printf("%s\n",ft_strchr(string,s));
// 	printf("%s",strchr(string,s));
// 	return (0);
// }
