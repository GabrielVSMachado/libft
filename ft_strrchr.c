/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:43:37 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/19 13:51:48 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	counter;

	counter++;
	while (str[counter])
		counter++;
	counter--;
	while (str[counter] && str[counter] != c)
		counter--;
	return ((char *)&str[counter]);
}
