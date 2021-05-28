/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:39:10 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/28 12:47:50 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
size_t	ft_strlcat(char *dst, const char *src, size_t len_dst_final)
{
	int		counter;
	char	*src_tmp;
	int		len_dst;

	len_dst = ft_strlen(dst);
	counter = 0;
	while (--len_dst_final != 0 && dst[counter])
		counter++;
	if (len_dst_final == 0)
		return (len_dst);
	while (*src_tmp && len_dst_final-- != 1)
		dst[counter++] = *(src_tmp++);
	dst[counter] = '\0';
	return ((src_tmp - src) + len_dst);

}
