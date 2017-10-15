/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 11:17:04 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/12 20:01:55 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	size_t 	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
	--i;	
	}
	if (c != '\0')
		return (char *)s;
	return (NULL);
}
