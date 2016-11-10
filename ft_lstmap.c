/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:19:16 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/10 17:44:19 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*link;

	new = NULL;
	link = NULL;
	while (lst != NULL)
	{
		if (new == NULL)
		{
			new = f(lst);
			link = new;
		}
		else
			link->next = f(lst);
	}
	return (new);
}
