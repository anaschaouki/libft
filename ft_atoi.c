/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchaouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:26:33 by anchaouk          #+#    #+#             */
/*   Updated: 2022/10/13 13:54:38 by anchaouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	holditmister(size_t res, int sign)
{
	if (res > 9223372036854775807 && sign == 1)
		return (-1);
	if (res > 9223372036854775807 && sign == -1)
		return (0);
	return (0);
}

int	ft_atoi(char *str)
{
	size_t	i;
	size_t	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result > 9223372036854775807)
		return (holditmister(result, sign));
	return (result * sign);
}
//    int main()
//     {
//   	char string[] = "-999999999999999999999999998888888888888888888888";
//    	printf("%d\n",ft_atoi(string));
//    	printf("%d",atoi(string));
//     }
