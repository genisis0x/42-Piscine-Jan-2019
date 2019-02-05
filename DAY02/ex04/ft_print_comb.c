/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combNorm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:43:45 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/10 21:39:54 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char nbr1;
	char nbr2;
	char nbr3;

	nbr1 = '0' - 1;
	while (++nbr1 <= '9')
	{
		nbr2 = nbr1;
		while (++nbr2 <= '9')
		{
			nbr3 = nbr2;
			while (++nbr3 <= '9')
			{
				if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
					ft_putchar(',');
				if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
					ft_putchar(' ');
				ft_putchar(nbr1);
				ft_putchar(nbr2);
				ft_putchar(nbr3);
			}
		}
	}
	ft_putchar('\n');
}
