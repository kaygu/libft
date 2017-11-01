/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <cde-neef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:20:42 by cde-neef          #+#    #+#             */
/*   Updated: 2017/10/23 19:49:55 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;

	if (s != NULL)
	{
		tmp = ft_strnew(len);
		if (tmp == NULL)
			return (NULL);
		i = -1;
		while (++i < len)
			tmp[i] = s[start + i];
		return (tmp);
	}
	return (NULL);
}
