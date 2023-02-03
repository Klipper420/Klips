/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamoud <hhamoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:08:53 by hhamoud           #+#    #+#             */
/*   Updated: 2023/01/08 15:52:53 by hhamoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long			i;
	unsigned long long	result;
	int					sign;

	i = 0;
	while (str[i] == 32 || str[i] == '\v' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\t')
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result >= 9223372036854775807 && sign == 1)
			return (-1);
		else if (result > 9223372036854775807 && sign == -1)
			return (0);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
