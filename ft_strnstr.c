/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:44:50 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:55:35 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	if (haystack == 0 && len == 0)
		return (0);
	while (haystack[i] != '\0' && i < len)
	{
		while ((haystack[i + j] == needle[j]
				&& needle[j] != '\0' && i + j < len))
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		j = 0;
		i++;
	}
	return (0);
}
