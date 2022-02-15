/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsenol <bsenol@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:48:37 by bsenol            #+#    #+#             */
/*   Updated: 2022/02/10 10:06:13 by bsenol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*b;
	size_t	c;

	c = ((size_t)start);
	if (s == 0)
		return (0);
	b = malloc((len + 1) * sizeof(char));
	if (b == 0)
		return (0);
	a = 0;
	while (a < len && c < ft_strlen(s))
	{
		b[a] = s[c + a];
		a++;
	}
	b[a] = '\0';
	return (b);
}
