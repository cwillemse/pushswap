/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:43:58 by cwillems          #+#    #+#             */
/*   Updated: 2018/05/25 11:50:17 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int src_c, size_t n)
{
	const unsigned char		*csrc;
	unsigned char			to_find;

	to_find = (unsigned char)src_c;
	csrc = (const unsigned char*)src;
	while (n-- > 0)
	{
		if (*csrc++ == to_find)
			return ((void*)(csrc - 1));
	}
	return (0);
}
