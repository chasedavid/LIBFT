/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 11:55:54 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/05 10:51:13 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(mem = (char *)malloc((size + 1) * (sizeof(char)))))
		return (NULL);
	while (*s1 || *s2)
	{
		if (*s1)
			*mem++ = *(char *)s1++;
		if (*s2 && !(*s1))
			*mem++ = *(char *)s2++;
	}
	return (mem);
}
