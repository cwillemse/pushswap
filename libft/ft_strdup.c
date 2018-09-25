/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:03:07 by cwillems          #+#    #+#             */
/*   Updated: 2018/06/08 14:39:32 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*res;

	res = (char *)malloc(ft_strlen(src) + 1);
	if (res == NULL)
		return (NULL);
	res = ft_strcpy(res, src);
	return (res);
}
