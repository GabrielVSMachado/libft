/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:18:29 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/24 11:35:16 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	counter;
	size_t	len_alloc;
	size_t	len_str;

	/* Alocate space conforme the needing */
	len_str = ft_strlen(str);
	if (len_str < (size_t)start)
		len_alloc = 1;
	else if (len_str - (size_t)start > len)
		len_alloc = len;
	else
		len_alloc = len_str - (size_t)start;

	substr = (char *)malloc(sizeof(char) * (len_alloc + 1));
	/* check malloc */
	if (substr == NULL)
		return (NULL);
	/* Copy substr */
	counter = 0;
	while (counter < len && (len_str > (size_t)start))
	{
		substr[counter] = str[start + counter];
		counter++;
	}
	substr[counter] = '\0';
	return (substr);
}
