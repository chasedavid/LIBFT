/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 11:17:04 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/09/27 12:53:04 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = ((void *)0);
	while (*s)
	{
		if (*s == (unsigned char)c)
			temp = (char *)s;
		++s;
		if (*s == '\0' && c != '\0')
			return (temp);
	}
	return (temp);
}
