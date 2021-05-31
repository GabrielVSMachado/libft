/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:07:06 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/31 00:00:01 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	n_pointers(char *str_tmp , char c ,char *set);
static int	check(char **s, int num_p);

char	**ft_split(const char *s, char c)
{
	char	**str;
	char	*str_tmp;
	char	set[2];
	int		num_p;
	char	*next_char_c;

	set[0] = c;
	set[1] = '\0';
	str_tmp = ft_strtrim(s, set);
	if (!str_tmp)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (n_pointers(str_tmp, c, set) + 1));
	if (!str)
		return (NULL);
	num_p = 0;
	while (*str_tmp)
	{
		next_char_c = ft_strchr(str_tmp, c);
		if (next_char_c - str_tmp > 0)
		{
			*(str + num_p) = ft_substr(str_tmp, 0, next_char_c - str_tmp);
			if (check(str, num_p))
				return (NULL);
			num_p++;
			str_tmp = next_char_c;
		}
		else if (!next_char_c)
		{
			*(str + num_p) = ft_substr(str_tmp, 0, ft_strlen(str_tmp));
			if (check(str, num_p))
				return (NULL);
			num_p++;
			break ;
		}
		str_tmp = ft_strtrim(str_tmp, set);
		if (!str_tmp)
			return (NULL);
	}
	*(str + num_p) = NULL;
	return (str);
}

static int	n_pointers(char *str_tmp, char c, char *set)
{
	int	number_of_pointer;
	int	len;
	char	*next_char_c;

	number_of_pointer = 0;
	while (*str_tmp)
	{
		str_tmp = ft_strtrim(str_tmp, set);
		if (!str_tmp)
			return (0);
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

static int	check(char **s , int num_p)
{
	int	i;

	i = 0;
	if (!*(s + num_p))
	{
		while (i < num_p)
		{
			free(s[i]);
			i++;
		}
		free(s);
		return (1);
	}
	return (0);
}
