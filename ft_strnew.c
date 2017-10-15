/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 07:05:46 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/12 12:41:47 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	if(!(str = ft_memalloc(size)))
		return (NULL);
	while (i <= size)
		str[i++] = '\0';
	return (str);
}
