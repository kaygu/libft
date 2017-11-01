/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <cde-neef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 20:39:47 by cde-neef          #+#    #+#             */
/*   Updated: 2017/10/23 20:42:33 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbrbase(uintmax_t nbr, char *base)
{
	ft_putnbrbase_fd(nbr, base, STDOUT_FILENO);
}
