/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:26:33 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/06 11:33:38 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1,&c,1);
}

int	ft_atoi(char *str)
{
	int i;
	int	result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	
		while (str[i] == ' ')
		i++;
		if(str[i] == '-')
		{
			sign = sign * -1;
			i++;
		}
		if(str[i] == '+')
			i++;

		while(str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}

	return (result * sign);
}

int main()
{
	char string[] = "   -123abs3";
	printf("%d___%d",ft_atoi(string),atoi(string));
}
