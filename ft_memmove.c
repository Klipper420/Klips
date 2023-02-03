/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamoud <hhamoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:23:22 by hhamoud           #+#    #+#             */
/*   Updated: 2023/01/13 23:50:59 by hhamoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!src && !dst)
		return (NULL);
	if (src < dst)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
int main(void)
{
	
	// void *d = "dsddsd";
	// void *s = "dsddsd";
	// void *d1 = "dsddsds";
	// void *s1 = "dsddsd";
	// // printf("%s",memmove(s,d,3));
	// ft_memmove(s1,d1,3);
	printf("%u",-1);
}
