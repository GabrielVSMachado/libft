/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:18:29 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/19 19:52:45 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	int		counter;

	substr = (char *)malloc(sizeof(char) * len);
	if (substr == NULL)
		return (NULL);
	counter = 0;
	while (counter < len)
		substr[counter++] = str[start + counter];
	substr[counter] = '\0';
	return (substr);
}
