/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 18:45:35 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/27 23:31:18 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functs.h"
#include "eval_expr.h"

int		parse_number(char **expr)
{
	int nbr1;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr1 = parse_sum(expr);
		if (**expr == ')')
		{
			(*expr)++;
			return (nbr1);
		}
	}
	return (ft_atoi(expr));
}

int		parse_factors(char **expr)
{
	int		nbr1;
	int		nbr2;
	char	operator;

	nbr1 = parse_number(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		operator = **expr;
		if (operator != '/' && operator != '*' && operator != '%')
			return (nbr1);
		(*expr)++;
		nbr2 = parse_number(expr);
		if (operator == '/')
			nbr1 /= nbr2;
		else if (operator == '*')
			nbr1 *= nbr2;
		else if (operator == '%')
			nbr1 %= nbr2;
	}
	return (nbr1);
}

int		parse_sum(char **expr)
{
	int		nbr1;
	int		nbr2;
	char	operator;

	nbr1 = parse_factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		operator = **expr;
		if (operator != '+' && operator != '-')
			return (nbr1);
		(*expr)++;
		nbr2 = parse_factors(expr);
		if (operator == '+')
			nbr1 += nbr2;
		else
			nbr1 -= nbr2;
	}
	return (nbr1);
}

int		eval_expr(char *str)
{
	return (parse_sum(&str));
}
