/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_for_fours.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:37:02 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/11 23:02:33 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pamonha.h"

void ft_checks_for_fours(char *g_mapa, char horizontal[2][4], char vertical[4][2])
{
	int i;

	i = -1;
	while (++i < 4)
	{
		// if (vertical[i][0] == '4')
		// {
		// 	g_mapa[i][0] = '1';
		// 	g_mapa[i][1] = '2';
		// 	g_mapa[i][2] = '3';
		// 	g_mapa[i][3] = '4';
		// }
		// if (vertical[i][1] == '4')
		// {
		// 	g_mapa[i][3] = '1';
		// 	g_mapa[i][2] = '2';
		// 	g_mapa[i][1] = '3';
		// 	g_mapa[i][0] = '4';
		// }
		if (*horizontal[i] == '4')
		{
			*(g_mapa + (0 * 4 + i)) = '1';
			*(g_mapa + (1 * 4 + i)) = '2';
			*(g_mapa + (2 * 4 + i)) = '3';
			*(g_mapa + (3 * 4 + i)) = '4';
		}
		// if (horizontal[1][i] == '4')
		// {
		// 	g_mapa[3][i] = '1';
		// 	g_mapa[2][i] = '2';
		// 	g_mapa[1][i] = '3';
		// 	g_mapa[0][i] = '4';
		// }
	}
}

//	iS:
//		esquerda_p_direita[0]	|	g_mapa[0][0] + g_mapa[0][1] + g_mapa[0][2] + g_mapa[0][3]	|	direita_p_esquerda[0]
//		esquerda_p_direita[1]	|	g_mapa[1][0] + g_mapa[1][1] + g_mapa[1][2] + g_mapa[1][3]	|	direita_p_esquerda[1]
//		esquerda_p_direita[2]	|	g_mapa[2][0] + g_mapa[2][1] + g_mapa[2][2] + g_mapa[2][3]	|	direita_p_esquerda[2]
//		esquerda_p_direita[3]	|	g_mapa[3][0] + g_mapa[3][1] + g_mapa[3][2] + g_mapa[3][3]	|	direita_p_esquerda[3]
//	jS:	
//		cima_p_baixo[0]			|	g_mapa[0][0] + g_mapa[1][0] + g_mapa[2][0] + g_mapa[3][0]	|	baixo_p_cima[0]
//		cima_p_baixo[1]			|	g_mapa[0][1] + g_mapa[1][1] + g_mapa[2][1] + g_mapa[3][1]	|	baixo_p_cima[1]
//		cima_p_baixo[2]			|	g_mapa[0][2] + g_mapa[1][2] + g_mapa[2][2] + g_mapa[3][2]	|	baixo_p_cima[2]
//		cima_p_baixo[3]			|	g_mapa[0][3] + g_mapa[1][3] + g_mapa[2][3] + g_mapa[3][3]	|	baixo_p_cima[3]


//					[0,0] 	[0,1]	[0,2]	[0,3]
//					[1,0] 	[1,1]	[1,2]	[1,3]
//					[2,0] 	[2,1]	[2,2]	[2,3]
//					[3,0] 	[3,1]	[3,2]	[3,3]