/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <cde-neef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:08:34 by cde-neef          #+#    #+#             */
/*   Updated: 2017/10/23 19:48:05 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
