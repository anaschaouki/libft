/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:37:51 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/14 11:15:55 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int    count(char const *s, char c)
{
    int    i;
    int count;

    i = 0;
    count = 0;
    while(s[i] != '\0')
    {
        if (s[i] != c && s[i - 1] == c)
            count++;
        
        i++;
    }
    return (count);
}
char *elgatto(char const *s, char c, int wordcount)
{
    int i;
    int b;
    int j;
    int start;
    int finish;
    char **array;

    i = 0;
    b = 0;
    j = 0;
    start = -1;
    finish = -1;
    array = (char **)malloc(sizeof(char *) * (wordcount + 1));

    while (s[i] != '\0')
    {
        if (s[i] != c && start == -1)
            start = i;
        
        else if (s[b] != c && finish == -1 && s[b + 1] == c)
            finish = b + 1;
        
        if (start != -1 && finish != -1)
        {
          array[j] = ft_substr(s, start, finish - start);
          start = -1;
          finish = -1;
          j++;
        }
        i++;
        b++;
    }
	array[j] = NULL;
    return(array);
}
 
char *ft_split(char const *s, char c)
{
    size_t wordcount;
	char	**res;
    wordcount = count(s,c);
    elgatto(s, c, wordcount);
	return (res);
}

int main()
{
    char *str = " hello world ";
    char c = ' ';
	char **array = ft_split(str, c);
    printf("%s\n%s", array[0], array[1]);
    return (0);
}