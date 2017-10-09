/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 11:32:35 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/05 08:36:11 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	static	word_counter(char const *s, char c)
{
	int		word_count;
	int		i;

	i = 0;
	if (s[0] == c)
		word_count = 0;
	else
		word_count = 1;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			++word_count;
		++i;
	}
	return (word_count);
}

int	static	word_size(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] == c)
		++s;
	while (s[i] != c)
		++i;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		word_count;
	int		word_index;
	int		i;
	char	**mem;

	word_count = word_counter(s, c);
	word_index = 0;
	if (!(mem = (char **)malloc((word_count + 1) * sizeof(char *))))
		return NULL;
	while (word_index < word_count)
	{
		i = 0;
		mem[word_index] = (char *)malloc((word_size(s, c) + 1) * (sizeof(char)));
		while (*s == c)
			++s;
		while (*s != c)	
			mem[word_index][i++] = *s++;
		mem[word_index++][i++] = '\0';
	}
	mem[word_index] = NULL;
	return (mem);
}
