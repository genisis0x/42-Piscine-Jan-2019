/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 21:57:50 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/15 02:15:24 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!to_find[0])
	{
		return (&str[i]);
	}
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			j += 1;
		}
		if (!to_find[j])
		{
			return (&str[i]);
		}
		j = 0;
		i += 1;
	}
	return (0);
}
