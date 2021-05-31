/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:07:56 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/31 12:52:22 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	check(char **s, int num_p);
static void	alloc_str(char **str, char *p_tmp, int len, int num_p);
static int	n_pointers(char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	*p_tmp;
	char	**str;
	int		len;
	int		num_p;

	str = NULL;
	num_p = n_pointers(p_tmp, c);
	len = 0;
	p_tmp = (char *)s;
	while (*p_tmp)
	{
		while (*p_tmp == c)
			p_tmp++;
		while (*p_tmp != c)
			len++;
		alloc_str(str, p_tmp, len, num_p);
		if (check(str, num_p))
			return (NULL);
		num_p++;
		p_tmp += len;
	}
	return (str);
}

static void	alloc_str(char **str, char *p_tmp, int len, int num_p)
{
	if (!str)
	{
		str = (char **)ft_calloc(sizeof(char *), num_p + 1);
		num_p = 0;
	}
	*(str + num_p) = ft_substr(p_tmp, 0, len);
}

static int	n_pointers(char *s, char c)
{
	int	counter;
	int	pointers_to_alloc;

	pointers_to_alloc = 0;
	counter = 0;
	while (s[counter])
	{
		while (s[counter] == c)
			counter++;
		pointers_to_alloc++;
		while (s[counter] != c && s[counter] != '\0')
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
			free(s[i]);
		s = NULL;
		return (1);
	}
	return (0);
}
