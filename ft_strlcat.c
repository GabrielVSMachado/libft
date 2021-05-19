/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:39:10 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/19 15:58:49 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
size_t	ft_strlcat(char *dst, const char *src, size_t buffer_size)
{
	size_t	counter_i;
	size_t	counter_j;

	counter_i = 0;
	counter_j = 0;
	while (dst[counter_i])
		counter_i++;
	while (counter_i < buffer_size && src[counter_j])
		dst[counter_i++] = src[counter_j++];
	dst[counter_i] = '\0';
	return (counter_i + counter_j);
}
