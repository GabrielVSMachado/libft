/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 23:11:08 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/12/16 23:11:08 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/* This function generate a hash and I get this function from the book 
 * Mastering Algorithms with C.
 *The idea is random add which 4 first(right to left) bits from which char
 in the content and when the first 4 (right to left) bit from a unsigned int
 *differ from 0  the  algorithm move the fours bits to the left until
 be in the first fours bits of a char type
 then set to zero the first fours of the unsigned int.
 *Is a good algorithm for string hashs*/
int	hash_generate(const void *content)
{
	unsigned int	val;
	unsigned int	tmp;
	char			*ptr;

	ptr = (char *)content;
	val = 0;
	while (*ptr != 0)
	{
		val = (val << 4) + *ptr;
		tmp = val & 0xf0000000;
		if (tmp)
		{
			val = val ^ (tmp >> 24);
			val = val ^ tmp;
		}
		ptr++;
	}
	return (val % TABLE_SIZE);
}
