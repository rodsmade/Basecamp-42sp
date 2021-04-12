/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_is_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:28 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/12 01:50:30 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pamonha.h"

int		ft_pairs_are_valid(char **argv)
{
	int count;

	count = -1;
	while (++count < 4)
	{
		if ((argv[1][count * 2] == '1' && argv[1][count * 2 + 8] == '1')
		|| (argv[1][count * 2] == '2' && argv[1][count * 2 + 8] == '4')
		|| (argv[1][count * 2] == '3' && argv[1][count * 2 + 8] == '3')
		|| (argv[1][count * 2] == '4' && argv[1][count * 2 + 8] == '4')
		|| (argv[1][count * 2] == '3' && argv[1][count * 2 + 8] == '4')
		|| (argv[1][count * 2] == '4' && argv[1][count * 2 + 8] == '3')
		|| (argv[1][count * 2] == '4' && argv[1][count * 2 + 8] == '2')
		|| (argv[1][16 + count * 2] == '1' && argv[1][24 + count * 2] == '1')
		|| (argv[1][16 + count * 2] == '2' && argv[1][24 + count * 2] == '4')
		|| (argv[1][16 + count * 2] == '3' && argv[1][24 + count * 2] == '3')
		|| (argv[1][16 + count * 2] == '4' && argv[1][24 + count * 2] == '4')
		|| (argv[1][16 + count * 2] == '3' && argv[1][24 + count * 2] == '4')
		|| (argv[1][16 + count * 2] == '4' && argv[1][24 + count * 2] == '3')
		|| (argv[1][16 + count * 2] == '4' && argv[1][24 + count * 2] == '2'))
			return (0);
	}
	return (1);
}

int		ft_argc_is_valid(int argc)
{
	if (argc == 2)
		return (1);
	else
		return (0);
}

int		ft_argv_is_valid(char **argv)
{
	int a;
	int params_entrada;

	a = 0;
	params_entrada = 0;
	while (argv[1][a])
	{
		if (argv[1][a] != ' ')
		{
			if (argv[1][a] > '0' && argv[1][a] < '5')
				params_entrada++;
			else
				return (0);
		}
		a++;
	}
	if (params_entrada != 16)
		return (0);
	return (1);
}

int		ft_input_is_valid(int argc, char **argv)
{
	if (ft_argc_is_valid(argc))
	{
		if (ft_argv_is_valid(argv))
		{
			if (ft_pairs_are_valid(argv))
				return (1);
			write(1, "Error\n", 6);
			return (0);
		}
		write(1, "Error\n", 6);
		return (0);
	}
	write(1, "Error\n", 6);
	return (0);
}
