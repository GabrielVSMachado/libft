/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 13:31:28 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/18 14:15:48 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void	*ft_memcpy(void *dst, const void *src, size_t buffer_size)
{
	size_t	counter_dst;
	size_t	counter_src;

	counter_dst = 0;
	counter_src = 0;
	while (buffer_size > counter_dst)
		((char *)dst)[counter_dst++] = ((char *)src)[counter_src++];
	return (dst);
}
