/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:55:19 by akunegel          #+#    #+#             */
/*   Updated: 2023/04/12 18:00:38 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*l1;
	t_list	*l2;

	l1 = *lst;
	while (l1)
	{
		l2 = l1->next;
		ft_lstdelone(l1, del);
		l1 = l2;
	}
	*lst = NULL;
}
