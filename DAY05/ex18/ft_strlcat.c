/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:36:44 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/15 23:09:09 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	j = 0;
	while (dest[i] && i < size)
		i += 1;
	j = i;
	while (src[k])
		k += 1;
	while (src[i - j] && size > i + 1)
	{
		dest[i] = src[i - j];
		i += 1;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + k);
}
