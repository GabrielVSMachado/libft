/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:16:21 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/18 14:17:05 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*c_str;
	void			*result;
	size_t			counter;

	counter = 0;
	c_str = (unsigned char *)str;
	while (n > counter)
	{
		if (c_str[counter] == c)
			break ;
		counter++;
	}
	if (counter == n)
	{
		result = c_str;
		return (result);
	}
	else
	{
		result = c_str + counter;
		return (result);
	}
}
