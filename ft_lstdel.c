/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 10:54:28 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/06 11:50:12 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*current;
	t_list		*temp;

	current = *alst;
	while (current != NULL)
	{	
		temp = current->next;
		ft_lstdelone(&current, (*del));
		current = temp;
	}
}
