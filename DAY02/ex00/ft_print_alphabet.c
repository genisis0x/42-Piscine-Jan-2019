/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:15:49 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/10 15:44:45 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char first_alphabet;

	first_alphabet = 'a';
	while (first_alphabet <= 'z')
	{
		ft_putchar(first_alphabet);
		first_alphabet = first_alphabet + 1;
	}
}
