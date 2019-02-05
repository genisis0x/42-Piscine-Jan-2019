/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 12:14:38 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/17 21:52:11 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * (max - min + 1));
	if (*range == NULL)
	{
		return (0);
	}
	i = 0;
	while (max > min)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}
