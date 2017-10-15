/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 11:55:54 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/14 19:03:40 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	if (mem = ft_strnew(size) == NULL)
		return (NULL)
	while (*s1)
		*mem++ = *(char *)s1++;
	*ft_strcat(mem, s2);
	return (mem);
}
