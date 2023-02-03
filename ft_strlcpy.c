/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamoud <hhamoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:27:55 by hhamoud           #+#    #+#             */
/*   Updated: 2022/12/24 19:27:47 by hhamoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s;

	s = 0;
	if (dstsize > 0)
	{
		while (src[s] != '\0' && s < dstsize - 1)
		{
			dst[s] = src[s];
			s++;
		}
		dst[s] = '\0';
	}
	return (ft_strlen(src));
}
