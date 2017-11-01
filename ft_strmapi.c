/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <cde-neef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:07:21 by cde-neef          #+#    #+#             */
/*   Updated: 2017/10/23 19:47:28 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
			new[i] = (*f)(i, s[i]);
			++i;
		}
		return (new);
	}
	return (NULL);
}
