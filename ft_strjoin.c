/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:32:06 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/12 19:49:05 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	lenres;
	char	*alloc;

	if (!s2)
		return (0);
	i = 0;
	lenres = ft_strlen(s1);
	alloc = (char *)malloc(sizeof(char) * (lenres + ft_strlen(s2) + 1));
	if (!alloc)
		return (0);
	while (i < lenres && s1[i] != '\0')
	{
		alloc[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= lenres && s2[i] != '\0')
	{
			alloc[lenres] = s2[i];
			lenres++;
			i++;
	}
	alloc[lenres] = '\0';
	return (alloc);
}

// int main()
// {
// 	char str1[] = "";
// 	char str2[] = "world";
// 	printf("%s",ft_strjoin(str1,str2));
// 	return (0);
// }
