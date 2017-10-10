/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 10:44:03 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/09/20 10:50:42 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isalnum(int c)
{
	if ((c < 48) || (c > 122))
		return (0);
	else if (c > 57 && c < 65)
		return (0);
	else
		return (c);
}