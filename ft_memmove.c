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

void *ft_memmove(void *dest, const void *src, size_t n)
{
   size_t        i;
    char        *desta;

    i = 0;
    desta = dest;
    if (!dest && !src)
        return (0);
    while (i <= n)
    {
        ((char *)dest)[n] = ((char *)src)[n];
		if (n == 0)
			return ((char *)dest);
        n--;
    }
    return ((char *)dest);
}

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
