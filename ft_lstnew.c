/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:19:16 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/08 16:21:38 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content, size_t content_size)
{
	t_list	*temp;

	if ((temp = (t_list*)malloc(sizeof(t_list))))
	{
		if (content != NULL)
		{
			if (content_size)
			{
				if (!(temp->content = malloc(content_size)))
				{
					free(temp);
					return (NULL);
				}
				ft_memcpy(temp->content, content, content_size);
			}
			else
				temp->content = content;
		}
		else
			temp->content = NULL;
		temp->next = NULL;
	}
	return (temp);
}