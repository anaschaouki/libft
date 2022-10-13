/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:37:51 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/13 17:00:03 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t len;
	size_t temp;

	i = 0;
	len = strlen(s);
	temp = 0;

	while(i <= len)
	{
		if(s[i] == c)
		{
			temp == i;
			i = 0;
			i++;
		}
		if (
		i++;
	}


}
