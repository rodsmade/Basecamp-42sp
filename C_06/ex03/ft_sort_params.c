/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:26:37 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/16 12:08:56 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return (-1);
	else if (*s2 < *s1)
		return (1);
	else
		return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	sort(int argc, char **argv)
{
	int		j;
	int		k;
	char	*swap;

	j = 1;
	k = j + 1;
	while (j < argc)
	{
		while (k < argc)
		{
			if (ft_strcmp(argv[j], argv[k]) == -1)
			{
				swap = argv[j];
				argv[j] = argv[k];
				argv[k] = swap;
			}
			k++;
		}
		k = 1;
		j++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
