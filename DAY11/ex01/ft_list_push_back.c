/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 13:06:24 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/23 22:46:19 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_node;
	t_list	*treverse;

	new_node = ft_create_elem(data);
	treverse = *begin_list;
	if (treverse == 0)
	{
		*begin_list = new_node;
		return ;
	}
	while (treverse->next != 0)
	{
		treverse = treverse->next;
	}
	treverse->next = new_node;
}
