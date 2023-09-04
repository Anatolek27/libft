/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:09:06 by akunegel          #+#    #+#             */
/*   Updated: 2023/04/12 17:49:43 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*old;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			old = ft_lstlast(*lst);
			old->next = new;
		}
	}
}
