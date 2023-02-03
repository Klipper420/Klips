/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamoud <hhamoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:52:10 by hhamoud           #+#    #+#             */
/*   Updated: 2022/12/28 21:13:18 by hhamoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		strlen;
	char		*newstring;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	strlen = ft_strlen(s1);
	while (strlen && ft_strchr(set, s1[strlen]))
		strlen--;
	newstring = ft_substr((char *)s1, 0, strlen + 1);
	return (newstring);
}
