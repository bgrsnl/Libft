/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsenol <bsenol@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:04:39 by bsenol            #+#    #+#             */
/*   Updated: 2022/02/06 03:08:57 by bsenol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int x)
{
	char	*last_pos;

	last_pos = (0);
	while (*s)
	{
		if (*s == x)
			last_pos = (char *)s;
		++s;
	}
	if (last_pos)
		return (last_pos);
	if (x == '\0')
		return ((char *)s);
	return (0);
}
