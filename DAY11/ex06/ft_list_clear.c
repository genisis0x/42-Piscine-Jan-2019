/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:22:13 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/23 23:35:55 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*traverse;
	t_list	*temp;

	traverse = *begin_list;
	if (traverse)
	{
		while (traverse->next != 0)
		{
			temp = traverse;
			traverse = traverse->next;
			free(temp);
		}
		traverse = 0;
		*begin_list = 0;
	}
}
