/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:10:41 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/07 22:03:28 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
	{
		str = "\0";
		return ((char *)str);
	}
	return (0);
}

int main()
{
	char string[] = "hello";
	char s = 'a';
	printf("%s\n",ft_strchr(string,s));
	printf("%s",strchr(string,s));
	return (0);
}
