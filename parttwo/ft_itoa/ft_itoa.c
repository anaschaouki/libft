/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:00:51 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/14 10:54:16 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     length(int n)
{
        int i = 0;
        if (n < 0)
        {
                n = n * -1;
                i++;
        }

        while (n != 0)
        {
                n /= 10;
                i++;
        }
        return (i);
}

char    *convert(int n, int len)
{
        char *alloc = (char *)malloc(sizeof(char) *len +1);
		alloc[len] = '\0';
    while (n != 0)
    {
		if (n < 0)
		{
			int i = 0;
			n *= -1;
			alloc[i] = '-';
		}

 		if (n > 0)
        {
                int res= n % 10;
                alloc[len -1] = res + 48;
                len--;
                n /= 10;

        }
    }
        return (alloc);
  }




char    *ft_itoa(int n)
{
        size_t  len;

        len = length(n);
        char *str = convert(n, len);
        return (str);
}

int main()
{
        int num = -123;
        printf("%s",ft_itoa(num));
        return (0);
}
