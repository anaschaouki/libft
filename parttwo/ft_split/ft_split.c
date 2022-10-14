/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:37:51 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/14 11:15:55 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	count(char const *s, char c)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while(s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		
		i++;
	}
	return (i);
}
 
char *ft_split(char const *s, char c)
{
	size_t first;
	size_t i;
	size_t wordcount;
	char **array;

	first = checkfirst(s,c);
	wordcount = count(s,c);
	i = 0;
	array = (char *)malloc(sizeof(char *) * wordcount);
	while(s[i] != 0)
	{
		int start = -1;
		while (s[i] != c && s[start] == c)
		{
			
		}
		i++;
	}

	
	
}

int main()
{
	char *str = " hello world ";
	char c = ' ';
	printf("%s", ft_split(str,c));
	return (0);
}
