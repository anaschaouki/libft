/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:13:02 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/19 16:13:09 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    func(unsigned int i, char *ps)
// {
//     (void)i;
//     *ps = ps[i] +1 ;
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	char			*ps;

	i = 0;
	ps = s;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// int main()
// {
//     char str[] = "hello";
//     ft_striteri(str,func);
//     printf("%s",str);
// }
