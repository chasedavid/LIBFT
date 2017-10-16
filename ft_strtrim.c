/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 12:06:09 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 16:22:28 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*mem;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(s) == 0)
		return (ft_strdup(""));
	size = ft_strlen(s);
	if (!(mem = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	if (*s)
	{
		while (whitespace(s[j]) == 1)
			++j;
		while (whitespace(s[size - 1]) == 1)
			--size;
		while (i < (size - j))
		{
			mem[i] = s[j + i];
			++i;
		}
	}
	mem[i] = '\0';
	return (mem);
}
