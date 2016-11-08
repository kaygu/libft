/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:34:40 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/07 13:31:09 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

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
	/* spaces at end of string */
	while (is_whitespace(s[end - 1]))
		--end;
	while (is_whitespace(s[begin]) && begin < end)
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
