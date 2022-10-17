/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:06:37 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:50:54 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	slen;

	i = 0;
	len = ft_strlen(dst) +1;
	slen = ft_strlen(src);
	if (size == 0 ||size == '\0' || size < len)
		return (slen + size);
	if (dst == '\0')
		return (slen);
	while (i < size )
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (slen + ft_strlen(dst));
}

int main()
{
	// my func
	char string1[] = "there is no stars in the sky";
	char string2[] = "";
	int size = '\0';
	printf("%zu\n",ft_strlcat(string1, string2, size));
	// their func
    char string3[] = "there is no stars in the sky";
	char string4[] = "";
	int size1 = '\0';
	printf("%zu\n",strlcat(string3, string4, size1));
}

