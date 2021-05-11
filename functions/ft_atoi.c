/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:16:45 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/05/11 12:37:07 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	counter_str;
	int	minus_signal;
	int	result;

	minus_signal = 0;
	counter_str = 0;
	if (str[counter_str] == '-')
	{
		minus_signal = 1;
		counter_str++;
	}
	result = 0;
	while (str[counter_str])
	{
		result = result * 10 + (str[counter_str] - '0');
		counter_str++;
	}
	if (minus_signal)
		return (result * (-1));
	return (result);
}
