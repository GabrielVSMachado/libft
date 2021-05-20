/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:39:30 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/19 15:51:43 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter_j;

	counter_j = 0;
	if (size == 0)
	{
		while (src[counter_j])
			counter_j++;
		return (counter_j);
	}
	while (size-- > 0 && src[counter_j++])
		dst[counter_j] = src[counter_j];
	dst[counter_j] = '\0';
	return (counter_j);
}
