/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:19:16 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/12 17:59:34 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*tmp;

	if ((tmp = (t_list*)malloc(sizeof(t_list))))
	{
		if (content != NULL)
		{
			if ((tmp->content = malloc(sizeof(content))) == NULL)
				return (NULL);
			ft_memcpy(tmp->content, content, content_size);
			tmp->content_size = content_size;
		}
		else
		{
			tmp->content = NULL;
			tmp->content_size = 0;
		}
		tmp->next = NULL;
	}
	return (tmp);
}
