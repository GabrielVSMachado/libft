/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:07:56 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/08/30 14:07:33 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	destroy(char **result)
{
	char	**tmp;

	tmp = result;
	while (*tmp != NULL)
	{
		free(*tmp);
		tmp++;
	}
}

static int	fill_pointers(char **result, char *str, int n_pointers)
{
	char	**fill_pointers;
	char	*tmp;

	fill_pointers = result;
	tmp = str;
	while (n_pointers-- > 0)
	{
		while (*tmp == '\0')
			tmp += 1;
		*fill_pointers = ft_strdup(tmp);
		if (*fill_pointers == NULL)
			return (ERROR);
		tmp += (ft_strlen(*fill_pointers) + 1);
		fill_pointers += 1;
	}
	*fill_pointers = NULL;
	return (SUCCESS);
}

static char	*change_c_to_null(const char *s, char c)
{
	char	*changed_str;
	char	*holder;

	changed_str = ft_strdup(s);
	if (changed_str == NULL)
		return (NULL);
	holder = changed_str;
	while (*holder)
	{
		while (*holder == c)
			*holder = '\0';
		holder += 1;
	}
	return (changed_str);
}

static int	number_of_pointers(const char *tmp, char c)
{
	int		n_pointers;

	n_pointers = 0;
	while (tmp != NULL && *tmp != 0)
	{
		if (*(tmp) != c && *(tmp) != 0)
		{
			n_pointers += 1;
			tmp += (ft_strchr(tmp, c) - tmp);
		}
		if (tmp != NULL)
			tmp += 1;
	}
	return (n_pointers);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	char	*tmp;
	char	*changed_str;
	int		n_pointers;

	tmp = (char *)s;
	while (*tmp == c)
		tmp += 1;
	n_pointers = number_of_pointers(tmp, c);
	result = (char **)malloc(sizeof(char *) * (n_pointers + 1));
	if (result == NULL)
		return (NULL);
	changed_str = change_c_to_null(tmp, c);
	if (changed_str == NULL)
	{
		destroy(result);
		return (free(result), NULL);
	}
	if (fill_pointers(result, changed_str, n_pointers) == ERROR)
	{
		destroy(result);
		free(changed_str);
		return (free(result), NULL);
	}
	return (free(changed_str), result);
}
