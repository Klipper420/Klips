/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamoud <hhamoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:38:22 by hhamoud           #+#    #+#             */
/*   Updated: 2023/01/07 16:46:45 by hhamoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_len(long num)
{
	int	len;

	len = 0;
	if (num == 0)
		len = 1;
	else if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*res;
	long	num;
	int		i;

	num = nb;
	i = nb_len(num);
	res = (char *)malloc (sizeof(char) * (nb_len(num) + 1));
	if (!res)
		return (NULL);
	res[i--] = '\0';
	if (num == 0)
		res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		res[i--] = 48 + (num % 10);
		num /= 10;
	}
	return (res);
}
