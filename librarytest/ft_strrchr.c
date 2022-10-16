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


char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = ft_strlen(string) - 1;
	while (string[i] > 0)
	{
		if (string[i] == c)
		{
			return ((char *)&string[i]);
		}
		i--;
	}
	if (c == '\0')
	{
		string = "\0";
		return ((char *)string);
	}
	return (0);
}
// int main()
// {
// 	char string[] = "helleoo";
// 	char s = 'e';
// 	printf("%s\n",ft_strrchr(string,s));
// 	printf("%s",strrchr(string,s));
// 	return (0);
// }
