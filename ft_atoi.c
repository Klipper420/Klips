/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiam <hiam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:19:06 by hiam              #+#    #+#             */
/*   Updated: 2022/12/06 17:16:28 by hiam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long 	i;
	long long 	result;
	int	sign;

	i = 0;
	while (str[i] == 32 || str[i] == '\v' || str[i] == '\n'|| str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\t')
	{
		i++;
	}
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
