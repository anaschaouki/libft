/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:07:00 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/08 10:40:13 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	n--;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n )
	{
		if((s1[i] == '\0' && s2[i] == '\0') && s1[i] == s2[i])
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char ss1[] = "hello";
	char ss2[] = "ha";
	int size = 2;
	printf("%d\n",ft_strncmp(ss1,ss2,size));
	printf("%d",strncmp(ss1,ss2,size));
	return (0);
}
		

