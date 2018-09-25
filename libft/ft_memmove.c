/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:23:39 by cwillems          #+#    #+#             */
/*   Updated: 2018/05/25 11:43:14 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char *csrc;
	unsigned char		*cdest;
	unsigned char		*final;

	csrc = (const unsigned char*)src;
	cdest = (unsigned char*)dest;
	final = cdest;
	if (cdest > csrc)
	{
		csrc = csrc + n - 1;
		cdest = cdest + n - 1;
		while (n-- > 0)
			*cdest-- = *csrc--;
	}
	else
	{
		while (n-- > 0)
			*cdest++ = *csrc++;
	}
	return (final);
}
