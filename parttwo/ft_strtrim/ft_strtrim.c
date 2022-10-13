/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:49:58 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/13 16:12:31 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	checkfirst(char const *string, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[j] && string[i] != '\0')
	{
		if (string[i] == set[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	return (i);
}

size_t	checklast(char const *string, char const *set)
{
	size_t	j;
	size_t	slen;

	j = 0;
	slen = ft_strlen(string) - 1;
	while (set[j] != '\0')
	{
		if (string[slen] == set[j])
		{
			slen--;
			j = 0;
		}
		j++;
	}
	return (slen);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	o;
	size_t	i;
	size_t	slen;
	char	*alloc;

	o = 0;
	i = checkfirst(s1, set);
	slen = checklast(s1, set);
	alloc = (char *)malloc((sizeof(char) * (slen - i) + 2));
	while (i <= slen)
	{
		alloc[o] = s1[i];
		i++;
		o++;
	}
	alloc[o] = '\0';
	return (alloc);
}
