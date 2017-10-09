/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 13:25:10 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/09/28 17:01:17 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s;
	char		*d;

	s = (char *)src;
	d = (char *)dst;
	if (dst > src && dst < (src + len))
	{
		s += len - 1;
		d += len - 1;
		while (len--)
			*d-- = *s--;
	}
	else if (src > dst)
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
