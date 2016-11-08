/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:05:02 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/08 14:57:19 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	long	div;

	nb = n;
	div = 1;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	while (nb / div > 9)
		div *= 10;
	while (div > 0)
	{
		ft_putchar_fd((nb / div) % 10 + '0', fd);
		div /= 10;
	}
}
