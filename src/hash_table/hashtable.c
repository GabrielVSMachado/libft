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
int	hash_generate(const void *key, unsigned int table_size)
{
	unsigned int	val;
	unsigned int	tmp;
	char			*ptr;

	ptr = (char *)key;
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
	return (val % table_size);
}

int	hashtbl_init(void *data, unsigned int n_buckets,
		int (*hash)(const void *, unsigned int), void (*del)(void *))
{
	t_hashtb	*tmp;

	if (!hash || !data || n_buckets <= 0)
		return (ERROR);
	tmp = (t_hashtb *)data;
	tmp->table = (t_llhashtbl *)ft_calloc(sizeof(t_llhashtbl *), n_buckets);
	if (!tmp->table)
		return (ERROR);
	tmp->hash = hash;
	tmp->del = del;
	tmp->size = 0;
	tmp->n_buckets = n_buckets;
	return (SUCCESS);
}
