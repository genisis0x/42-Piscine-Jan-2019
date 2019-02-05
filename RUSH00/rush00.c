/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joson <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 18:59:48 by joson             #+#    #+#             */
/*   Updated: 2019/01/13 19:06:03 by joson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_printrow(int x, char edge, char middle);

void	ft_printrow(int x, char edge, char middle)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(edge);
		}
		else
		{
			ft_putchar(middle);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			ft_printrow(x, 'o', '-');
		}
		else
		{
			ft_printrow(x, '|', ' ');
		}
		i++;
	}
}
