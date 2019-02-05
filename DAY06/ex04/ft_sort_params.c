/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 17:42:48 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/16 22:01:26 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		printstring(int argc, char **argv)
{
	int	k;
	int	j;

	k = 1;
	while (k < argc)
	{
		j = 0;
		while (argv[k][j] != '\0')
		{
			ft_putchar(argv[k][j]);
			j++;
		}
		ft_putchar('\n');
		k++;
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		j;
	int		i;
	char	*temp;

	j = argc - 1;
	while (j > 1)
	{
		i = argc - 1;
		while (i > 1)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				temp = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = temp;
			}
			i--;
		}
		j--;
	}
	printstring(argc, argv);
	return (0);
}
