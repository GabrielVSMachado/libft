/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:10:17 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/10 17:33:04 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int size_cmp)
{
	int	counter_s1;
	int	counter_s2;

	counter_s1 = 0;
	counter_s2 = 0;
	while (s1[counter_s1] == s2[counter_s2] && size_cmp > 0)
	{
		counter_s1++;
		counter_s2++;
		size_cmp--;
	}
	return ((unsigned char)s1[counter_s1] - (unsigned char)s2[counter_s2]);
}
