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

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen( const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return(i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	size_t len1;
	size_t len2;
	size_t lenres;
	char *alloc;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	lenres = len1 + len2;
	alloc = (char *)malloc(lenres *sizeof(char)+ 1);
	while (i < lenres  && s1[i] != '\0')
	{
		alloc[i] = s1[i];
		i++;
	}
	if (i < lenres && s2[j] != '\0')
	{
		while (i < lenres && s2[j] != '\0')
		{
			alloc[i] = s2[j];
			i++;
			j++;
		}
	}

	alloc[i] = '\0';
	return (alloc);

}

int main()
{
	char str1[] = "hello";
	char str2[] = "world";
	printf("%s",ft_strjoin(str1,str2));
	return (0);
}
