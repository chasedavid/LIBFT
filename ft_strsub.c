/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:13:30 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/02 14:00:50 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	char	*first;

	first = (char *)(s + start);
	if (!(mem = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (len--)
		*mem++ = *(char *)first++;
	*mem = '\0';
	return (mem);
}
