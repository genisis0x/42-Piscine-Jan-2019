/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 20:46:25 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/23 23:06:41 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*ele;
	unsigned int	i;

	ele = begin_list;
	i = 0;
	while (ele)
	{
		if (i == nbr)
		{
			return (ele);
		}
		ele = ele->next;
		i++;
	}
	return (0);
}
