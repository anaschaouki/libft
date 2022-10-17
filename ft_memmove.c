/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:44:49 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/10 19:31:53 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	const char *src1;
	char *dest1;
	char *temp;

	i = 0;
	src1 = src;
	dest1 = dest;
    temp = "";	
	temp = ft_memcpy(temp,src1,n);
	while (i < n)
	{
		dest1[n - 1] = temp[n - 1];
		i++;
		n--;
	}
	dest1[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char *str = "hello";
// 	char dest[] = "";
// 	int len = 3;
// 	ft_memmove(dest,str,len);
// 	return (0);
// }
