/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:10:23 by akunegel          #+#    #+#             */
/*   Updated: 2023/04/12 18:10:24 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*nvlist;

	if (!lst)
		return (0);
	nvlist = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst ->content));
		if (!tmp)
		{
			ft_lstclear (&tmp, (*del));
			return (0);
		}
		ft_lstadd_back(&nvlist, tmp);
		lst = lst ->next;
	}
	return (nvlist);
}
