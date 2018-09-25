/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:41:17 by cwillems          #+#    #+#             */
/*   Updated: 2018/06/15 19:01:31 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(const char *s, char c)
{
	int cnt;
	int sub;

	sub = 0;
	cnt = 0;
	if (s == NULL)
		return (0);
	while (*s)
	{
		if (sub == 1 && *s == c)
			sub = 0;
		if (sub == 0 && *s != c)
		{
			sub = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static int		ft_wordlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**t;
	int		n_word;
	int		i;

	i = 0;
	n_word = ft_count((const char *)s, c);
	t = (char **)malloc(sizeof(*t) *
			(ft_count((const char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (n_word--)
	{
		while (*s == c && *s)
			s++;
		t[i] = ft_strsub((const char *)s, 0,
				ft_wordlen((const char *)s, c));
		if (t[i] == NULL)
			return (NULL);
		s = s + ft_wordlen(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
