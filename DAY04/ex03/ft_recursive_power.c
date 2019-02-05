/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:06:00 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/12 16:08:51 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int y;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 0 && power % 2 == 0)
	{
		y = ft_recursive_power(nb, power / 2);
		return (y * y);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
