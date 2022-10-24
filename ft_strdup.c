/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:43:54 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/11 15:47:01 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t			n;
	size_t			i;
	char			*dst;

	n = ft_strlen(s);
	i = 0;
	dst = (char *)malloc(n * sizeof(char) + 1);
	if (!dst)
		return (0);
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
