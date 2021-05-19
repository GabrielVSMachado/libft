/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:01:08 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/19 14:36:50 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	counter_l;
	size_t	counter_b;

	if (little == NULL)
		return (big);
	counter_b = 0;
	while (big[counter_b])
	{
		counter_l = 0;
		while (big[counter_b + counter_l] == little[counter_l]
			&& counter_l != len - 1)
			counter_l++;
		if (counter_l == len - 1)
			break ;
		counter_b++;
	}
	if (big[counter_b] == '\0')
		return (NULL);
	big += counter_b;
	return (big);
}
