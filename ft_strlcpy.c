/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:39:45 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/10 15:50:19 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, const char *src, int size)
{
	int	counter_i;
	int	counter_j;

	counter_i = 0;
	counter_j = 0;
	while (size-- > 0 && src[counter_j])
		dst[counter_i++] = src[counter_j++];
	dst[counter_i] = '\0';
	return (counter_i);
}
