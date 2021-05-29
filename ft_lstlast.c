/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 13:38:10 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/29 14:31:23 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p_tmp;
	int		len;

	len = ft_lstsize(lst);
	p_tmp = lst;
	while (--len != 0)
		p_tmp = p_tmp->next;
	return (p_tmp);
}
