/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:04:49 by cwillems          #+#    #+#             */
/*   Updated: 2018/05/25 11:10:07 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	const unsigned char		*csrc;
	unsigned char			*cdest;

	csrc = (const unsigned char*)src;
	cdest = (unsigned char*)dest;
	while (len-- > 0)
		*cdest++ = *csrc++;
	return (dest);
}
