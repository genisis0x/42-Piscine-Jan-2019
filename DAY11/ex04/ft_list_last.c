/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:44:51 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/23 22:53:28 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*treverse;

	treverse = begin_list;
	if (begin_list == 0)
	{
		return (0);
	}
	while (treverse->next != 0)
	{
		treverse = treverse->next;
	}
	return (treverse);
}
