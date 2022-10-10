/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:10:41 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/08 17:22:52 by anchaouk         ###   ########.fr       */
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
	if (str == '\0')
	{
		str = "\0";
		return ((char *)str);
	}
	return (0);
}

int main()
{
	char string[] = "";
	char s = 'e';
	printf("%s\n",ft_strchr(string,s));
	printf("%s",strchr(string,s));
	return (0);
}
