/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtable.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:10:40 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/12/16 21:10:40 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHTABLE_H
# define HASHTABLE_H

typedef struct s_llhashtbl
{
	char				*key;
	void				*content;
	struct s_llhashtbl	*next;
}	t_llhashtbl;

typedef struct s_hashtb
{
	unsigned int		size;
	unsigned int		n_buckets;
	int					(*hash)(const void *, unsigned int);
	void				(*del)(void *);
	struct s_llhashtbl	*table;
}	t_hashtb;

int	hash_generate(const void *content, unsigned int table_size);
int	hashtbl_init(void *data, unsigned int n_buckets,
		int (*hash)(const void *, unsigned int), void (*del)(void *));
#endif
