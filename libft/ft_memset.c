/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:55:13 by cwillems          #+#    #+#             */
/*   Updated: 2018/05/25 11:02:51 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	unsigned char	ch;
	unsigned char	*msrc;

	ch = (unsigned char)c;
	msrc = (unsigned char*)src;
	while (len-- > 0)
		*msrc++ = ch;
	return (src);
}
