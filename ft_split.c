/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:39:39 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/24 14:39:39 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	number_p_needed(const char *s, char c);
/* Separate strings as c */
char	**ft_split(char const *s, char c)
{
	char	**s_splited;
	char	*p_tmp;
	char	p_c[2];
	size_t	counter;
	size_t	counter_s_splited;
	size_t	len_btw_s_c;
	size_t	n_pointers;
	
	p_c[0] = c;
	p_c[1] = '\0';
	s = ft_strtrim(s, p_c);
	n_pointers = number_p_needed(s, c);
	*s_splited = (char *)malloc(sizeof(char *) * (n_pointers + 1)); 
	counter_s_splited = 0;
	while (*s)
	{
		while (*s == c && *(s + 1) == c)
			s++;
		if (*s == '\0')
			break ;
		len_btw_s_c = ft_strchr(s, c) - s;
		p_tmp = (char *)malloc(sizeof(char) * (len_btw_s_c + 1));
		counter = ft_strlcpy(p_tmp, s, len_btw_s_c);
		*(s_splited + counter_s_splited) = (char *)malloc(sizeof(char) * (counter + 1));
		ft_strlcpy(*s_splited + counter_s_splited, p_tmp, counter);
		counter_s_splited++;
		if (n_pointers < counter_s_splited)
			break ;
		free(p_tmp);
	}
	*(s_splited + counter_s_splited) = NULL;
	return (s_splited);
}

static	size_t	number_p_needed(const char *s, char c)
{
	size_t	counter;
	size_t	n_pointers;

	counter = 0;
	n_pointers = 0;
	while (s[counter])
	{
		while (s[counter] == c && s[counter + 1] == c)
		{
			counter++;
			if (s[counter] == '\0')
				break ;
		}
		if (ft_strchr(&s[counter], c) != NULL)
			n_pointers++;
		counter++;
	}
	return (n_pointers);
}
