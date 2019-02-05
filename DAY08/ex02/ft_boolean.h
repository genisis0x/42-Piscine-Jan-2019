/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 22:54:13 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/18 22:54:16 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <stdbool.h>
# include <unistd.h>

typedef bool		t_bool;
# define EVEN_MSG 	"I have an even number of arguments.\n"
# define ODD_MSG 	"I have an odd number of arguments.\n"
# define SUCCESS 	0
# define TRUE 		true
# define FALSE 		false
# define EVEN(x)	((x % 2 == 0) ? TRUE : FALSE)

void	ft_putstr(char *str);

t_bool	ft_is_even(int nbr);

#endif
