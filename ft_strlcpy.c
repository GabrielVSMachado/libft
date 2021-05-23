/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:39:30 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/23 16:07:34 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	counter_dst;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	counter_dst = 0;
	while (--size != 0 && *src)
		*(dst + counter_dst++) = *(src++);
	*(dst + counter_dst) = '\0';
	return (len_src);
}
