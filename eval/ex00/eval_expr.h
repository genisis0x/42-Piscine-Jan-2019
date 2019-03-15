/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 11:56:54 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/27 11:56:56 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int		eval_expr(char *expr);
int		parse_sum(char **expr);
int		parse_factors(char **expr);
int		parse_number(char **expr);
#endif
