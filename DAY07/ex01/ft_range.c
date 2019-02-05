/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 03:29:55 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/17 21:50:23 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;

	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	arr = (int*)malloc(sizeof(int) * (max - min) + 1);
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[max - min - 1] = max - 1;
		max--;
	}
	return (arr);
}
