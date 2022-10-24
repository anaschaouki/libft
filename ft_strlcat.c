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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	len;
	size_t	dslen;

	i = 0;
	if (!dst && !size)
		return (ft_strlen(src));
	slen = ft_strlen(src);
	len = ft_strlen(dst);
	dslen = ft_strlen(src) + ft_strlen(dst);
	if (size == 0 || size < len)
		return (slen + size);
	while (src[i] && len < size - 1)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (dslen);
}
