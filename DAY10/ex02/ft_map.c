/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 13:14:59 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/22 22:58:36 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *result;

	i = 0;
	result = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		result[i] = (f)(tab[i]);
		i++;
	}
	return (result);
}
