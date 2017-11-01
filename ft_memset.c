/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <cde-neef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:57:41 by cde-neef          #+#    #+#             */
/*   Updated: 2017/10/23 19:43:18 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*buffer;

	buffer = (unsigned char*)ptr;
	while (len > 0)
	{
		*buffer = (unsigned char)value;
		++buffer;
		--len;
	}
	return (ptr);
}
