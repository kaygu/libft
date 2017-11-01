/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <cde-neef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 11:53:39 by cde-neef          #+#    #+#             */
/*   Updated: 2017/10/26 17:59:24 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t		ft_strnlen(const char *s, size_t max)
{
	unsigned int	i;

	i = ft_strlen(s);
	if (i < max)
		return (i);
	return (max);
}
