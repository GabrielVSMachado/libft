/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:38:04 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/18 18:38:06 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*c_str;
	size_t			counter;

	counter = 0;
	c_str = (unsigned char *)str;
	while (n > counter)
	{
		if (c_str[counter] == c)
			break ;
		counter++;
	}
	if (!c_str[counter])
		return (NULL);
	return ((void *)str + counter);
}
