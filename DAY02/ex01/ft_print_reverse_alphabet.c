/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:24:06 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/10 15:55:06 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char first_alphabet;

	first_alphabet = 'z';
	while (first_alphabet >= 'a')
	{
		ft_putchar(first_alphabet);
		first_alphabet = first_alphabet - 1;
	}
}
