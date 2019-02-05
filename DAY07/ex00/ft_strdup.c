/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 00:02:36 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/17 21:38:02 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strlen1(char *str)
{
	int		j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

char	*ft_strdup(char *src)
{
	char	*des;
	int		i;
	int		size;

	size = strlen1(src);
	des = (char*)malloc(sizeof(*src) * (size + 1));
	if (!des)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
