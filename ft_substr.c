/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:48:59 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/12 18:31:15 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	const char	*str;
	char		*ptr;

	i = 0;
	str = &s[start];
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (0);
	if (!s)
		return (0);
	while (i < len && start < ft_strlen(s))
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int main()
{
	char str[] = "hello there mate";
	int n = 7;
	int l = 4;
	printf("%s",ft_substr(str,n,l));
	return (0);
}*/
