/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:19:16 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/10 18:51:19 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res = i + 1;
		i++;
	}
	if (res)
		return (&((char*)s)[res - 1]);
	else if (s[i] == c)
		return (&((char*)s)[i]);
	return (NULL);
}
