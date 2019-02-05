/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 12:36:28 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/22 21:29:01 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

typedef void	(*t_ptrfun)(int, int);

t_ptrfun	f_parse(char *op_string)
{
	if (!ft_strcmp(op_string, "+"))
		return (&sum);
	else if (!ft_strcmp(op_string, "-"))
		return (&diff);
	else if (!ft_strcmp(op_string, "*"))
		return (&mul);
	else if (!ft_strcmp(op_string, "/"))
		return (&div);
	else if (!ft_strcmp(op_string, "%"))
		return (&mod);
	else
		return (0);
}

int			main(int argc, char **argv)
{
	int			a;
	int			b;
	t_ptrfun	op;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op = f_parse(argv[2]);
	if (argc == 4)
	{
		if (op != 0)
		{
			op(a, b);
		}
		else
			ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
