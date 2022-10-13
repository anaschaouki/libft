/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:49:58 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/12 21:01:09 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     ft_strlen(const char *s)
{
        int i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
        size_t i;
        size_t j;
        size_t o;
        size_t slen;
        char *alloc;

        i= 0;
        j = 0;
        o = 0;
        slen = ft_strlen(s1)- 1;

        while (set[j] != '\0' && s1[i] != '\0')
        {
                if(s1[i] == set[j])
                {
                        i++;
                        j = 0;
                }
                else
                        j++;
        }
        j = 0;
        while (set[j] != '\0')
        {
                if (s1[slen] == set[j])
                {
                        slen--;
                        j = 0;
                }
                else
                        j++;
        }
        alloc = (char *)malloc((sizeof(char) * (slen - i) +2));
        while (i <= slen)
        {
                alloc[o] = s1[i];
                i++;
                o++;
        }
        alloc[o] = '\0';

        return(alloc);

}

int main()
{
        char str1[] = "edhellode";
        char str2[] = "ed";
        printf("%s",ft_strtrim(str1,str2));
        return (0);
}
