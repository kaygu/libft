/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:29:23 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/14 13:13:50 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nb_digits(long n, int is_neg)
{
	size_t	len;

	if (is_neg)
		len = 2;
	else
		len = 1;
	while (n > 9)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char			*res;
	size_t			len;
	long			nb;
	int				is_negative;

	nb = n;
	is_negative = 0;
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb;
	}
	len = nb_digits(nb, is_negative);
	res = ft_strnew(len);
	if (res == NULL)
		return (NULL);
	while (len > 0)
	{
		res[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		--len;
	}
	if (is_negative)
		res[0] = '-';
	return (res);
}
