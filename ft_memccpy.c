/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <cde-neef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:35:42 by cde-neef          #+#    #+#             */
/*   Updated: 2017/10/23 19:31:44 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*c_dst;
	unsigned char	*c_src;
	unsigned char	c_char;
	unsigned int	i;

	c_char = (unsigned char)c;
	c_dst = (unsigned char*)dst;
	c_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		c_dst[i] = c_src[i];
		if (c_src[i] == c_char)
			return (&c_dst[i + 1]);
		++i;
	}
	return (NULL);
}
