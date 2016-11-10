/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:34:40 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/10 17:58:01 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *s)
{
	int		begin;
	int		end;
	int		i;
	char	*str;

	if (s == NULL)
		return (NULL);
	end = ft_strlen(s);
	begin = 0;
	while (ft_isspace(s[end - 1]))
		--end;
	while (ft_isspace(s[begin]) && begin < end)
		++begin;
	str = ft_strnew(end - begin);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i + begin < end)
	{
		str[i] = s[begin + i];
		++i;
	}
	return (str);
}
