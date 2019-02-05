/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:21:55 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/23 23:08:04 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*traverse;
	t_list	*past;
	t_list	*future;

	future = 0;
	past = 0;
	traverse = *begin_list;
	while (traverse)
	{
		future = traverse->next;
		traverse->next = past;
		past = traverse;
		traverse = future;
	}
	*begin_list = past;
}
