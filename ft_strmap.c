/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:32:19 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/12 18:25:10 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	if (s != NULL && f != NULL)
	{
		new = ft_strnew(ft_strlen(s));
		if (new == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			new[i] = (*f)(s[i]);
			++i;
		}
		return (new);
	}
	return (NULL);
}
