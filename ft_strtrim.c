/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 12:06:09 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/05 10:53:26 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	static	whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*mem;
	int		size;

	size = ft_strlen(s);
	if (!(mem = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (*s)
	{
		while (whitespace(s[0]) == 1)
			++s;
		while (whitespace(*s) == 1 && whitespace(*(s + 1)) != 1)
			*mem++ = *s++;
	}
	*mem = '\0';
	return (mem);
}
