/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 23:18:33 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/17 23:33:49 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_putstr(char *str)
{
	int		m;
	char	*put;
i
	m = 0;
	if (!str)
	{
		put[m] = str[m];
		m++;
	}
	return (put);
}

int		word_counter(char *str)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= ' ')
		{
			if (str[i - 1] > ' ')
			{
				words++;
			}
		}
		i++;
	}
	words++;
	return (words);
}

char	*char_count(char *str, int *index)
{
	char	*word;
	int		i;
	int		start;
	int		end;

	i = *index;
	while (str[i] <= ' ')
		i++;
	start = i;
	while (str[i] > ' ')
		i++;
	end = i;
	*index = i;
	word = (char*)malloc(sizeof(char) * end - start);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		k;
	int		i;

	array = (char**)malloc(sizeof(char*) * word_counter(str) + 1);
	k = 0;
	i = 0;
	while (k < word_counter(str + 1))
	{
		array[k] = char_count(str, &i);
		k++;
	}
	array[k] = 0;
	return (array);
}
