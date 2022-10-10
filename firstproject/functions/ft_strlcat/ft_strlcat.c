/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:06:37 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/10 22:45:47 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
size_t	ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;
	size_t len1;

	i = 0;
	len = ft_strlen(dst);
	len1 = ft_strlen(dst);;

	while (src[i] != '\0' && i < size)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return(len1 + i);

}

int main()
{
	char string1[] = "hello";
	char string2[] = "world";
	int size = 2;
	/*ft_strlcat(string1, string2, size);*/
	printf("%zu\n",ft_strlcat(string1, string2, size));
	printf("%s\n",string1);
	char string3[] = "hello";
    char string4[] = "world";
	int size1 = 2;
	printf("%zu\n",strlcat(string3, string4, size1));
	printf("%s",string3);
}
