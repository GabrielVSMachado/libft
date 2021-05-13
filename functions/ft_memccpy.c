/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 13:49:17 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/13 14:21:19 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t buffer_size)
{
	size_t	counter_dst;
	size_t	counter_src;

	counter_dst = 0;
	counter_src = 0;
	while (buffer_size > counter_dst)
	{
		if (((char *)src)[counter_src] == (char)c)
			break ;
		else
			((char *)dst)[counter_dst] = ((char *)src)[counter_src];
		counter_dst++;
		counter_src++;
	}
	return (dst);
}
