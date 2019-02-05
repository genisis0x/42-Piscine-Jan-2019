/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_paramstest.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:16:35 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/17 22:08:09 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str)
	{
		str++;
		l++;
	}
	return (l);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*argw;
	int		i;
	int		j;
	int		k;
	int		size;

	size = 0;
	i = 1;
	while (i < argc)
		size += ft_strlen(argv[i++]) + 1;
	argw = (char*)malloc(sizeof(char) * size);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			argw[k++] = argv[i][j++];
		if (i == argc - 1)
			argw[k++] = '\0';
		else
			argw[k++] = '\n';
		i++;
	}
	return (argw);
}
