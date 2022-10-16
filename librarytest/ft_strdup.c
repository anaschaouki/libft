/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:43:54 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:47:01 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s, size_t n)
{
	const char		*str;
	size_t			i;
	char			*dest;
	char			*memal;

	str = s;
	i = 0;
	dest = "";
	memal = (char *)malloc(n * sizeof(char) + 1);
	if (memal == NULL)
		return (0);
	while (i < n)
	{
		memal[i] = str[i];
		i++;
	}
	memal[i] = '\0';
	return ((char *)memal);
}
// int main()
// {
// 	char str[] = "hello";
// 	int size = 7;
// 	printf("%s\n",ft_strdup(str,size));
// 	char str1[] = "hello";
// 	int size1 = 7;
// 	printf("%s",ft_strdup(str1,size1));
// 	return (0);
// }
