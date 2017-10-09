/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 10:54:28 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/09 16:57:28 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*current;
	t_list		*temp;

	temp = *alst;
	while (current != NULL)
	{	
		current = *alst;
		(*del)(current->content, current->content_size);
		*alst = *alst->next;
		free(current);
		current = NULL;
	}
	alst = NULL;
}
