/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:08:34 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/07 11:33:58 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src != NULL && dst != NULL)
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
		if (i != n)
			dst[i] = '\0';
		return (dst + i);
	}
	return (NULL);
}