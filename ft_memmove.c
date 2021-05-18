/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:43:30 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/18 17:43:36 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*c_src;
	char	*c_dst;
	size_t	counter_dst;

	c_src = (char *)src;
	c_dst = (char *)dst;
	counter_dst = 0;
	if (src > dst)
	{
		while (counter_dst < n)
		{
			c_dst[counter_dst] = c_src[counter_dst];
			counter_dst++;
		}
	}
	else if (dst > src)
	{
		c_dst[n] = c_src[n];
		n--;
	}
	return (dst);
}
