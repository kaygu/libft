/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:19:16 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/08 16:21:38 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfh.h"
#include <stdlib.h>

void	ft_lstdel(t_list_head *head, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp_next;

	temp = head->first;
	while (temp != NULL)
	{
		temp_next = temp->next;
		del(temp->content);
		free(temp);
		temp = temp_next;
	}
	ft_bzero(head, sizeof(t_list_head));
}