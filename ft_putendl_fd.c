/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenl_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:28:48 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/12 15:35:29 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;
	i = 0;
	if(!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd,&s[i],1);
		i++;
	}
		write(fd,"\n",1);
}
