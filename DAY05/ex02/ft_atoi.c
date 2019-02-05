/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 15:33:13 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/15 00:48:09 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int nbr;
	int originalsign;

	i = 0;
	nbr = 0;
	originalsign = 1;
	if (!str[i])
	{
		return (0);
	}
	while ((str[i] >= 9 && str[i] <= 32))
	{
		i += 1;
	}
	if ((str[i] == '-') || (str[i] == '+'))
		if (str[i++] == '-')
			originalsign = -1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = (nbr * 10 + (str[i++] - 48));
	}
	return (nbr * originalsign);
}
