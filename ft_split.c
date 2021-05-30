/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:07:06 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/30 21:51:18 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	n_pointers(char *str_tmp , char c ,char *set);

char	**ft_split(const char *s, char c)
{
	char	**str;
	char	*str_tmp;
	char	set[2];
	int	len;
	int	counter;
	char	*next_char_c;

	set[0] = c;
	set[1] = '\0';
	str_tmp = (char *)s;
	str = (char **)malloc(sizeof(char *) * (n_pointers(str_tmp, c, set) + 1));
	str_tmp = ft_strtrim(s, set);
	counter = 0;
	while (str_tmp)
	{
		next_char_c = ft_strchr(str_tmp, c);
		len = (next_char_c - str_tmp);
		*(str + counter) = (char *)malloc(sizeof(char) * (len + 1));
		*(str + counter) = ft_substr(str_tmp, (unsigned int)*str_tmp, len);
		counter++;
		str_tmp += len + 1;
		str_tmp = ft_strtrim(str_tmp, set);
	}
	*(str + counter) = NULL;
	return (str);
}

static int	n_pointers(char *str_tmp, char c, char *set)
{
	int	number_of_pointer;
	int	len;
	char	*next_char_c;

	number_of_pointer = 0;
	while (str_tmp)
	{
		str_tmp = ft_strtrim(str_tmp, set);
		next_char_c = ft_strchr(str_tmp, c);
		len = next_char_c - str_tmp;
		if (!next_char_c)
		{
			number_of_pointer++;
			break ;
		}
		else if (len > 0) 
		{
			number_of_pointer++;
			str_tmp += len + 1;
			continue ;
		}
		
	}
	return (number_of_pointer);
}
