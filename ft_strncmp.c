/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:40:07 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/23 11:26:25 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t size_cmp)
{
	int	counter_s1;
	int	counter_s2;

	if (size_cmp == 0)
		return (0);
	counter_s1 = 0;
	counter_s2 = 0;
	while (s1[counter_s1] == s2[counter_s2] && --size_cmp > 0)
	{
		counter_s1++;
		counter_s2++;
	}
	return ((unsigned char)s1[counter_s1] - (unsigned char)s2[counter_s2]);
}
