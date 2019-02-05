/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 23:09:45 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/15 23:33:52 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
		dest[a++] = '\0';
	return (dest);
}

int		lengthcpy(char *src)
{
   	unsigned int	k;
	k = 0;
	while (src[k])
	   	k++;
	return(k);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	ft_strncpy(dest, src, size);
	return (lengthcpy(src));
}

