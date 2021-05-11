/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 15:55:44 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/10 17:05:56 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dst, const char *src, int buffer_size)
{
	int	counter_i;
	int	counter_j;

	counter_i = 0;
	counter_j = 0;
	while (dst[counter_i])
		counter_i++;
	while (counter_i < buffer_size && src[counter_j])
		dst[counter_i++] = src[counter_j++];
	dst[counter_i] = '\0';
	return (counter_i + counter_j);
}
