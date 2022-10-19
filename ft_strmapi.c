/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:14:36 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/19 16:14:44 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// char	func(unsigned int i, char c)
// {
// 	(void)i;
// 	c = 'e';
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (0);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	char *str = "hallo world";
// 	ft_strmapi(str, func);
// 	printf("%s", ft_strmapi(str, func));
// 	return (0);
// }
