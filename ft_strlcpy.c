/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:39:45 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/18 14:14:09 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter_i;
	size_t	counter_j;

	counter_i = 0;
	counter_j = 0;
	while (size-- > 0 && src[counter_j])
		dst[counter_i++] = src[counter_j++];
	return (counter_i);
}
