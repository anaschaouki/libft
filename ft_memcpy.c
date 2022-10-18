/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:19:38 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:35:32 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*srca;
	char		*desta;

	i = 0;
	srca = src;
	desta = dest;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return ((char *)dest);
}

// int main()
// {
// 	char src[] = "test basic du memcpy !";
// 	char dest[22];
// 	int size = 22;
// 	ft_memcpy(dest,src,size);
// 	printf(";%s;\n",dest);

// 	// oooooooooooo
// 	char src1[] = "test basic du memcpy !";
// 	char dest1[22];
// 	int size1 = 22;
// 	memcpy(dest1,src1,size1);
// 	printf(";%s;",dest1);
// 	return (0);
// }
