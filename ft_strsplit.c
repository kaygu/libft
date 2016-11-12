/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-neef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:33:08 by cde-neef          #+#    #+#             */
/*   Updated: 2016/11/12 18:38:37 by cde-neef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t		count_words(const char *s, const char c)
{
	size_t	words;
	int		i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			++words;
		else if (s[i] != c && s[i - 1] == c)
			++words;
		++i;
	}
	return (words);
}

static char			*get_word(const char **s, const char c)
{
	char	*word;
	int		i;

	while (**s == c)
		(*s)++;
	i = 0;
	while ((*s)[i] != c && (*s)[i] != '\0')
		++i;
	word = ft_strsub(*s, 0, i);
	while (i--)
		(*s)++;
	return (word);
}

char				**ft_strsplit(const char *s, char c)
{
	char	**res;
	size_t	words;
	size_t	i;

	if (s != NULL)
	{
		words = count_words(s, c);
		res = (char**)malloc(sizeof(char*) * (words + 1));
		if (res == NULL)
			return (NULL);
		i = 0;
		while (i < words)
		{
			res[i] = get_word(&s, c);
			i++;
		}
		res[i] = NULL;
		return (res);
	}
	return (NULL);
}
