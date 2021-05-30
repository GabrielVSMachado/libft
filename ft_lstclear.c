/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:58:11 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/30 13:39:37 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p_tmp;

	p_tmp = *lst;
	while (p_tmp)
	{
		p_tmp = p_tmp->next;
		ft_lstdelone(p_tmp, del);
	}
	*lst = NULL;
}
