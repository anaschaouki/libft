/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:44:49 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/09 18:20:07 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	const char *srcb;
	char *destb;

	i = 0;
	srcb = src;
	destb = dest;

	while (i < n)
	{
		destb[i] = srcb[i];
		i++;
	}
	destb[i] = '\0';
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	const char *srca;
	char *desta;
	char *temp;

	i = 0;
	srca = src;
	desta = dest;
	temp = "";
	temp = ft_memcpy(temp,src,n);

	while (i < n)
	{
		desta[i] = temp[i];
		i++;
	}
	desta[i] = '\0';
	
	return (dest);
}

int main()
{
	char *str = "hello";
	char dest[3] = "";
	int len = 3;
	ft_memmove(dest,str,len);
	printf("%s",dest);
	return (0);
}
