/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 02:51:07 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/18 14:12:39 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_takes_place(int hour)
{

		
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d",ft_timecall, )

	if (hour/12  1)
	{
		previous hour = hour;
		hour = (hour % 12);
		write(1, "A.M", 1);
	}
	if (hour/12 >= 1)
	{
		write(1, "P.M", 1);
	}
}

