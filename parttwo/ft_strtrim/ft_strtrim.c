/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:49:58 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/12 21:01:09 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	i= 0;
	j = 0;
	while (set[j] != '\0' && s1[i] != '\0'))
	{
		if(s1[i] = set[j])
		{
			i++;
			j = 0;
		}
		else if (s1[i] != set[j] && set[j] == '\0')
			break;
		i++;
	}

}

int main()
{
	char str1[] = "edhellode";
	char str2[] = "ed";
	printf("%s",ft_strtrim(str1,str2);
	return (0);
}
