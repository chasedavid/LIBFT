/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 10:13:30 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 15:17:07 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	char	*first;
	size_t	i;

	i = 0;
	first = (char *)(s + start);
	if (!(mem = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (len-- && s[i])
	{
		mem[i] = (char)first[i];
		++i;
	}
	mem[i] = '\0';
	return (mem);
}
