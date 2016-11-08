/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:20:42 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/07 10:06:12 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;

	tmp = ft_strnew(len);
	if (tmp == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		tmp[i] = s[start + i];
	return (tmp);
}