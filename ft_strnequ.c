/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 09:57:25 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 00:34:40 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	while (*(s1 + i) == *(s2 + i) && (i < n))
	{
		++i;
		if (*(s1 + i) != *(s2 + i))
			return (0);
	}
	return (1);
}
