/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:23:41 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/23 22:51:55 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*treverse;
	int		i;

	i = 0;
	treverse = begin_list;
	while (treverse)
	{
		treverse = treverse->next;
		i++;
	}
	return (i);
}
