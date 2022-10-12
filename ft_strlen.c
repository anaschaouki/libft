/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:07:59 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:57:17 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/* int main()
{
 	char string[] = "helloooooooooooooooooooooooooooooooooooooooo";
 	 	printf("%zu__%zu",ft_strlen(string),strlen(string));
 	return (0);
}*/
