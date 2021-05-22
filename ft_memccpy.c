/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 13:49:17 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/18 14:16:58 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	while (n)
	{
		*((char *)dst) = *((char *)src);
		if (*((char *)src) == c)
		{
			dst++;
			src++;
			return (dst);
		}
		dst++;
		src++;
		n--;
	}
	return (NULL);
}
