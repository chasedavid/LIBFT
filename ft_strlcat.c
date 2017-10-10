/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 10:02:38 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/05 10:16:43 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dlen;
	size_t		slen;
	size_t		i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (size-- && *(dst + dlen))
		++dlen;
	if (!size)
		return (dlen + ft_strlen(src));
	while (*(src + slen))
	{
		if (size != 1)
		{
			dst[dlen + i++] = src[slen];
			--size;
		}
		++slen;
	}
	*(dst + dlen + i) = '\0';
	return (dlen + slen);
}