/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:38:59 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/17 16:43:50 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	c_s1 = ((unsigned char *)s1);
	c_s2 = ((unsigned char *)s2);
	while (*c_s1 == *c_s2 && *c_s1 && *c_s2)
	{
		c_s1++;
		c_s2++;
	}
	return (*c_s1 - *c_s2);
}
