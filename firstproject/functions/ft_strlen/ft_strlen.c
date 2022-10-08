/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:07:59 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/07 14:13:34 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;
	i = 0;
	while (s[i] != '\0')
	   i++;
	return(i);
}

int main()
{
	char string[] = "hellooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
	printf("%zu__%zu",ft_strlen(string),strlen(string));
	return (0);
}
