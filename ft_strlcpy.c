/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:42:37 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/07 19:04:17 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <string.h>

size_t	ft_strlen(const char *c)
{
	size_t i;
	i = 0;
	while (c[i] != '\0')
	i++;

	return (i);
}
size_t	ft_strlcpy(char *dst ,const char *src, size_t dstsize)
{
	size_t i;
	size_t l;

	i = 0;
	l = ft_strlen(src);
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (l);
}

int main()
{
	char src[] = "hello";
	char dest[10] = "";
	char src1[] = "hello";
	char dest1[10] = "";
	int size = 4;
	printf("%zu ---- %zu\n",ft_strlcpy(dest,src,size),strlcpy(dest1,src1,size));
	printf("%s\n",dest);
	printf("%s\n",dest1);
	return (0);
}


