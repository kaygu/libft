/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:19:16 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/10 17:28:19 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	long int	n;
	int			sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		else
			sign = 1;
		++str;
	}
	while (ft_isdigit(*str))
	{
		n = n * 10 + *str - '0';
		++str;
	}
	return ((int)n * sign);
}
