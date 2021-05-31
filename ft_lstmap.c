/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:42:35 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/31 21:26:06 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*p_tmp;

	while (lst)
	{
		 p_tmp = ft_lstnew(f(lst->content));
		 if (!p_tmp)
		 {
			 ft_lstclear(&new, del);
			 free(p_tmp);
			 return (NULL);
		 }
		 lst = lst->next;
		 p_tmp = p_tmp->next;
	}
	new = p_tmp;
	free(p_tmp);
	return (new);
}
