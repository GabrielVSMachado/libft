/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 22:20:06 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/28 15:40:00 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"
static size_t	len_n(unsigned int n);
static char		convert_str_n(char *n_str, unsigned int n, unsigned int i);

char	*ft_itoa(int n)
{
	char			*n_str;
	unsigned int	n_tmp;

	if (n < 0)
	{
		n_tmp = (size_t)(-1) * n;
		n_str = (char *)malloc(sizeof(char) * (len_n(n_tmp) + 2));
		n_str[0] = '-';
		convert_str_n(n_str, n_tmp, 1);
	}
	else
	{
		n_tmp = n;
		n_str = (char *)malloc(sizeof(char) * (len_n(n_tmp) + 1));
		convert_str_n(n_str, n_tmp, 0);
	}
	if (n_str == NULL)
		return (NULL);
	return (n_str);
}

static size_t	len_n(unsigned int n_tmp)
{
	size_t	len;

	len = 0;
	if (n_tmp == (unsigned int)INT_MAX)
		return (11);
	while (n_tmp)
	{
		n_tmp /= 10;
		len++;
	}
	return (len);
}

static char	convert_str_n(char *n_str, unsigned int n, unsigned int i)
{
	if (n < 10)
		return (n_str[i++] = n % 10);
	return (convert_str_n(n_str, n / 10, i));
}
