/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 12:36:03 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/29 16:10:01 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*p_tmp;

	p_tmp = lst;
	i = 0;
	while (p_tmp)
	{
		p_tmp = p_tmp->next;
		i++;
	}
	return (i);
}
