/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:19:38 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/09 16:48:36 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	const char *srca;
	char *desta;

	i = 0;
	srca = src;
	desta = dest;

	while ( i < n)
	{
		desta[i] = srca[i];
		i++;
	}
	desta[i] = '\0';
	
	return (dest);
}

int main()
{
	char src[] = "hello";
	char dest[] = "";
	int size = 5;
	ft_memcpy(dest,src,size);
	printf("%s",dest);
	return (0);
}

