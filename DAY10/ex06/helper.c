/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:24:39 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/22 20:28:20 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	originalsign;

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
	{
		if (str[i++] == '-')
			originalsign = -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = (nbr * 10 + (str[i++] - 48));
	}
	return (nbr * originalsign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * (-1);
	}
	else
		nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + 48);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str++);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}
