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
// #include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*desta;

	desta = dest;
	if (!dest && !src)
		return (0);
	if (n == 0)
		return ((char *)dest);
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return ((char *)dest);
}

// int main()
// {
//     char dst1[0xF0];
//     char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
//     // int size = 0xF0 - 0xF;

//     printf ("|%s|", ft_memmove(dst1, data, strlen(data)));
// }
// int main()
// {
//     // char *src = "thanks to @apellicc for this test !\r\n";
// 	// char dst1[0xF0];
// 	// int size = ft_strlen(src);
//     // memmove(dst1, src, size);
//     // ft_memmove("", "" - 1, 0);
//     printf ("|%s|", memmove("", "" - 1, 0));
// }
// int main()
// {
//     char *str = "this is a good nyancat !\r\n";
//     char dest[0xF0];
//     int len = ft_strlen(str);
//     printf("%s",ft_memmove(dest,str,len));
//     return (0);
// }
// int main()
// {
// 	char *str = "hello";
// 	char dest[] = "";
// 	int len = 3;
// 	ft_memmove(dest,str,len);
// 	return (0);
// }
