/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwillems <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:52:56 by cwillems          #+#    #+#             */
/*   Updated: 2018/06/06 20:59:43 by cwillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *src1, const void *src2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	i = 0;
	us1 = (unsigned char *)src1;
	us2 = (unsigned char *)src2;
	while ((i < n) && us1[i] == us2[i])
		i += 1;
	if (i == n)
		return (0);
	else
		return (us1[i] - us2[i]);
}
