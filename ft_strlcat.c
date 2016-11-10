/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:19:16 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/08 16:21:38 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*tmp;
	char	*buffer;
	size_t	len;

	len = 0;
	if (src != NULL && dst != NULL)
	{
		tmp = (char *)ft_memchr(dst, '\0', size);
		if (tmp == NULL)
			return (size + ft_strlen(src));
		buffer = (char *)src;
		len = (size_t)(tmp - dst) + ft_strlen(buffer);
		while ((size_t)(tmp - dst) < size - 1 && *buffer != '\0')
		{
			*tmp = *buffer;
			tmp++;
			buffer++;
		}
		*tmp = '\0';
	}
	return (len);
}