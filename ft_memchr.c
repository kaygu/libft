/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <cde-neef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:19:16 by cde-neef          #+#    #+#             */
/*   Updated: 2017/10/23 19:52:15 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned char			c_c;
	const unsigned char		*c_s;

	i = 0;
	c_s = s;
	c_c = (unsigned char)c;
	while (i < n)
	{
		if (c_s[i] == c_c)
			return (&((unsigned char*)c_s)[i]);
		i++;
	}
	return (NULL);
}
