/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 23:26:44 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/19 23:26:44 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static	int	is_in_set(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy_s1;
	size_t	counter_s1;
	size_t	counter_s1_final;

	if (s1 == NULL)
		return (NULL);
	else if (set == NULL)
	{
		cpy_s1 = ft_strdup(s1);
		return (cpy_s1);
	}
	counter_s1 = 0;
	while (s1[counter_s1])
	{
		if (is_in_set(s1[counter_s1], set))
			counter_s1++;
		else if (!is_in_set(s1[counter_s1], set))
			break ;
	}
	counter_s1_final = ft_strlen(s1) - 1;
	while (is_in_set(s1[counter_s1_final], set))
		counter_s1_final--;
	cpy_s1 = ft_substr(s1, counter_s1, counter_s1_final - counter_s1 + 1);
	return (cpy_s1);
}

static	int	is_in_set(char c, const char *set)
{
	size_t	counter;

	counter = -1;
	while (set[++counter])
	{
		if (c == set[counter])
			return (1);
	}
	return (0);
}
