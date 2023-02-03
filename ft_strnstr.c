/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamoud <hhamoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:28:58 by hhamoud           #+#    #+#             */
/*   Updated: 2022/12/24 20:37:00 by hhamoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;

	if (*needle == '\0' || needle == haystack)
		return ((char *)haystack);
	if (!len)
		return (0);
	l = ft_strlen(needle);
	while (*haystack && len-- >= l)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, l) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
