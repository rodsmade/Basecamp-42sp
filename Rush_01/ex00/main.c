/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:31 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/12 01:57:18 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pamonha.h"

char	g_dicas_horizontal[2][4];
char	g_dicas_vertical[4][2];
char	g_mapa[16];

void	ft_gets_input(char *argv[])
{
	g_dicas_horizontal[0][0] = argv[1][0];
	g_dicas_horizontal[0][1] = argv[1][2];
	g_dicas_horizontal[0][2] = argv[1][4];
	g_dicas_horizontal[0][3] = argv[1][6];
	g_dicas_horizontal[1][0] = argv[1][8];
	g_dicas_horizontal[1][1] = argv[1][10];
	g_dicas_horizontal[1][2] = argv[1][12];
	g_dicas_horizontal[1][3] = argv[1][14];
	g_dicas_vertical[0][0] = argv[1][16];
	g_dicas_vertical[1][0] = argv[1][18];
	g_dicas_vertical[2][0] = argv[1][20];
	g_dicas_vertical[3][0] = argv[1][22];
	g_dicas_vertical[0][1] = argv[1][24];
	g_dicas_vertical[1][1] = argv[1][26];
	g_dicas_vertical[2][1] = argv[1][28];
	g_dicas_vertical[3][1] = argv[1][30];
}

int		main(int argc, char *argv[])
{
	int linha;

	if (ft_input_is_valid(argc, argv))
	{
		linha = -1;
		while (++linha < 16)
			g_mapa[linha] = 'X';
		ft_gets_input(argv);
		ft_checks_for_fours(g_mapa, g_dicas_horizontal, g_dicas_vertical);
		ft_checks_for_ones(g_mapa, g_dicas_horizontal, g_dicas_vertical);
		ft_prints_map(g_mapa);
		return (1);
	}
	return (0);
}
