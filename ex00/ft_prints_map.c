/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:20 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/11 23:03:20 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// TODO: Tirar a designação de valores do g_mapa de dentro do loop e passar pros argumentos de chamada da função
void	ft_prints_map(char g_mapa[16])
{
	int linha;

	linha = -1;
	while(++linha < 16)
	{
		write(1, g_mapa + linha, 1);
		write(1, " ", 1);
	if ((linha + 1) % 4 == 0)
		write(1, "\n", 1);
	}
}

/*
int g_mapa[4][4];
int *linha;
int *coluna;

MAPEAMENTO DE LINHAS E COLUNAS COM O NOSSO g_mapa:
	LINHAS:
		esquerda_p_direita[0]	|	g_mapa[0][0] + g_mapa[0][1] + g_mapa[0][2] + g_mapa[0][3]	|	direita_p_esquerda[0]
		esquerda_p_direita[1]	|	g_mapa[1][0] + g_mapa[1][1] + g_mapa[1][2] + g_mapa[1][3]	|	direita_p_esquerda[1]
		esquerda_p_direita[2]	|	g_mapa[2][0] + g_mapa[2][1] + g_mapa[2][2] + g_mapa[2][3]	|	direita_p_esquerda[2]
		esquerda_p_direita[3]	|	g_mapa[3][0] + g_mapa[3][1] + g_mapa[3][2] + g_mapa[3][3]	|	direita_p_esquerda[3]
	COLUNAS:	
		cima_p_baixo[0]			|	g_mapa[0][0] + g_mapa[1][0] + g_mapa[2][0] + g_mapa[3][0]	|	baixo_p_cima[0]
		cima_p_baixo[1]			|	g_mapa[0][1] + g_mapa[1][1] + g_mapa[2][1] + g_mapa[3][1]	|	baixo_p_cima[1]
		cima_p_baixo[2]			|	g_mapa[0][2] + g_mapa[1][2] + g_mapa[2][2] + g_mapa[3][2]	|	baixo_p_cima[2]
		cima_p_baixo[3]			|	g_mapa[0][3] + g_mapa[1][3] + g_mapa[2][3] + g_mapa[3][3]	|	baixo_p_cima[3]
*/