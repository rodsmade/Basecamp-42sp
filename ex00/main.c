/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:31 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/11 19:46:08 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pamonha.h"

char	g_cima_p_baixo[4];
char	g_baixo_p_cima[4];
char	g_esquerda_p_direita[4];
char	g_direita_p_esquerda[4];
int		g_mapa[4][4];

int		main(int argc, char *argv[])
{
	if (ft_input_is_valid(argc, argv))
	{
		g_cima_p_baixo[0] = argv[1][0];
		g_cima_p_baixo[1] = argv[1][2];
		g_cima_p_baixo[2] = argv[1][4];
		g_cima_p_baixo[3] = argv[1][6];
		g_baixo_p_cima[0] = argv[1][8];
		g_baixo_p_cima[1] = argv[1][10];
		g_baixo_p_cima[2] = argv[1][12];
		g_baixo_p_cima[3] = argv[1][14];
		g_esquerda_p_direita[0] = argv[1][16];
		g_esquerda_p_direita[1] = argv[1][18];
		g_esquerda_p_direita[2] = argv[1][20];
		g_esquerda_p_direita[3] = argv[1][22];
		g_direita_p_esquerda[0] = argv[1][24];
		g_direita_p_esquerda[1] = argv[1][26];
		g_direita_p_esquerda[2] = argv[1][28];
		g_direita_p_esquerda[3] = argv[1][30];
		printf("g_cima_p_baixo[0]: %c\n", argv[1][0]);
		return (1);
	}
	printf("entrada errada");
	return (0);
}
