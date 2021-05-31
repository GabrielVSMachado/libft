/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:07:56 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/31 15:00:36 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	check(char **s, int num_p);
static char	**alloc_str(char **str, char **p_tmp, int len, int *num_p);
static int	n_pointers(char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	*p_tmp;
	char	**str;
	int		num_p;
	char	set[2];

	set[0] = c;
	set[1] = 0;
	str = NULL;
	p_tmp = ft_strtrim(s, set);
	num_p = n_pointers(p_tmp, c);
	while (*p_tmp)
	{
		str = alloc_str(str, &p_tmp, c, &num_p);
		if (check(str, num_p))
			return (NULL);
		num_p++;
		while (*p_tmp == c)
			p_tmp++;
	}
	return (str);
}

static char	**alloc_str(char **str, char **p_tmp, int c, int *num_p)
{
	int	len;

	len = 0;
	while ((p_tmp[0][len]) != c && p_tmp[0][len] != '\0')
		len++;
	if (!str)
	{
		str = (char **)ft_calloc(sizeof(char *), *num_p + 1);
		*num_p = 0;
	}
	*(str + (*num_p)) = ft_substr(p_tmp[0], 0, len);
	(p_tmp[0]) += len;
	return (str);
}

static int	n_pointers(char *s, char c)
{
	int	counter;
	int	pointers_to_alloc;

	pointers_to_alloc = 0;
	counter = 0;
	while (s[counter])
	{
		pointers_to_alloc++;
		while (s[counter] != c && s[counter] != '\0')
			counter++;
		while (s[counter] == c)
			counter++;
	}
	return (pointers_to_alloc);
}

static int	check(char **s, int num_p)
{
	int	i;

	i = 0;
	if (!*(s + num_p))
	{
		while (i < num_p)
			free(s[i++]);
		s = NULL;
		return (1);
	}
	return (0);
}
