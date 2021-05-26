/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 22:20:06 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/26 19:30:18 by gvitor-s         ###   ########.fr       */
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
		n_tmp = (-1) * n;
	else
		n_tmp = n;
	n_str = (char *)malloc(sizeof(char) * (len_n(n_tmp) + 1));
	if (n_str == NULL)
		return (NULL);
	if (n < 0)
		n_str[0] = '-';
	convert_str_n(n_str, n_tmp, 0);
	return (n_str);
}

static size_t	len_n(unsigned int n_tmp)
{
	size_t			len;

	if (n_tmp == INT_MAX)
		return (10);
	else if (n_tmp == INT_MIN)
		return (11);
	len = -1;
	while (n_tmp % 10 >= 0)
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
