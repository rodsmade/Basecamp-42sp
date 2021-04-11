/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_for_fours.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:37:02 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/11 00:10:27 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_checks_for_fours()
{
	int linha;
	int coluna;
	
// regra dos 4 nas linhas
	linha = 0;
	while (linha < 4)
	{
		if (esquerda_p_direita[linha] == '4')
		{
			mapa[linha][0] = '1';
			mapa[linha][1] = '2';
			mapa[linha][2] = '3';
			mapa[linha][3] = '4';
		}
		if (direita_p_esquerda[linha] == '4')
		{
			mapa[linha][3] = '1';
			mapa[linha][2] = '2';
			mapa[linha][1] = '3';
			mapa[linha][0] = '4';
		}
		i++;
	}
// regra dos 4 nas colunas
	coluna = 0;
	while (coluna < 4)
	{
		if (cima_p_baixo[coluna] == '4')
		{
			mapa[0][coluna] = '1';
			mapa[1][coluna] = '2';
			mapa[2][coluna] = '3';
			mapa[3][coluna] = '4';
		}
		if (baixo_p_cima[coluna] == '4')
		{
			mapa[3][coluna] = '1';
			mapa[2][coluna] = '2';
			mapa[1][coluna] = '3';
			mapa[0][coluna] = '4';
		}
		i++;
	}
}

//	LINHAS:
//		esquerda_p_direita[0]	|	mapa[0][0] + mapa[0][1] + mapa[0][2] + mapa[0][3]	|	direita_p_esquerda[0]
//		esquerda_p_direita[1]	|	mapa[1][0] + mapa[1][1] + mapa[1][2] + mapa[1][3]	|	direita_p_esquerda[1]
//		esquerda_p_direita[2]	|	mapa[2][0] + mapa[2][1] + mapa[2][2] + mapa[2][3]	|	direita_p_esquerda[2]
//		esquerda_p_direita[3]	|	mapa[3][0] + mapa[3][1] + mapa[3][2] + mapa[3][3]	|	direita_p_esquerda[3]
//	COLUNAS:	
//		cima_p_baixo[0]			|	mapa[0][0] + mapa[1][0] + mapa[2][0] + mapa[3][0]	|	baixo_p_cima[0]
//		cima_p_baixo[1]			|	mapa[0][1] + mapa[1][1] + mapa[2][1] + mapa[3][1]	|	baixo_p_cima[1]
//		cima_p_baixo[2]			|	mapa[0][2] + mapa[1][2] + mapa[2][2] + mapa[3][2]	|	baixo_p_cima[2]
//		cima_p_baixo[3]			|	mapa[0][3] + mapa[1][3] + mapa[2][3] + mapa[3][3]	|	baixo_p_cima[3]


//					[0,0] 	[0,1]	[0,2]	[0,3]
//					[1,0] 	[1,1]	[1,2]	[1,3]
//					[2,0] 	[2,1]	[2,2]	[2,3]
//					[3,0] 	[3,1]	[3,2]	[3,3]