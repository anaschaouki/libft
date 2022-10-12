/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:13:14 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:32:22 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] > str2[i] || str1[i] < str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *s1 = "htlto";
// 	char *s2 = "hetlo";
// 	int size = 4;
// 	printf("mine :%d\n",ft_memcmp(s1,s2,size));
// 	char *s11 = "htlto";
// 	char *s22 = "hetlo";
// 	int size1 = 4;
// 	printf("%d",memcmp(s11,s22,size1));
// 	return (0);
// }
