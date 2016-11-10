/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:08:34 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/10 18:47:27 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*buffer;
	
	buffer = dst;
	while (*src && n)
	{
		*buffer = *src;
		++src;
		++buffer;
		--n;
	}	
	while (n)
	{
		*buffer = '\0';
		++buffer;
		--n;
	}
	return (dst);
}
