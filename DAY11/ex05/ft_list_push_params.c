/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:12:40 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/23 23:00:40 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_node;

	new_node = ft_create_elem(data);
	new_node->next = *begin_list;
	*begin_list = new_node;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*add;

	add = 0;
	i = 1;
	while (ac > i)
	{
		ft_list_push_front(&add, av[i]);
		i++;
	}
	return (add);
}
