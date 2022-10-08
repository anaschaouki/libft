/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:44:00 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/07 22:36:25 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrchr(const char *string, int c)
{
	int i;
	i = ft_strlen(string) - 1;
	while (string[i] > 0)
	{
			if(string[i] == c)
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
int main()
{
	char string[] = "helleoo";
	char s = 'h';
	printf("%s\n",ft_strrchr(string,s));
	printf("%s",strrchr(string,s));
	return (0);
}
			

