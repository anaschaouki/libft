/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:06:39 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/10 18:00:32 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    char *str;
    int  null;

    i = 0;
    str = (char *)s;
    null = '\0';

    while (i < n)
    {
        str[i] = null;
        i++;
    }
}

void    *ft_calloc(size_t num, size_t size)
{
    size_t i;
    void *ptr;

    i = 0;
    ptr = malloc(num * size);
    ft_bzero(ptr,num);
    return (ptr);
}

int main()
{
	int i;
	i = 0;
    int *ptr;
    ptr = ft_calloc(5,sizeof(char));
	while (i < 5)
	{
		printf("%d",ptr[i]);
		i++;
	}
    return (0);
}
