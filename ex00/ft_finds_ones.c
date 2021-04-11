/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_for_ones.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:10:41 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/11 00:11:06 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_checks_for_ones()
{
	int linha;
	int coluna;
	
// regra dos 1's nas linhas
	linha = 0;
	while (linha < 4)
	{
		if (esquerda_p_direita[linha] == '1')
		{
			mapa[linha][0] = '4';
		}
		if (direita_p_esquerda[linha] == '1')
		{
			mapa[linha][3] = '4';
		}
		i++;
	}

// regra dos 1's nas colunas
	coluna = 0;
	while (coluna < 4)
	{
		if (cima_p_baixo[coluna] == '1')
		{
			mapa[0][coluna] = '4';
		}
		if (baixo_p_cima[coluna] == '1')
		{
			mapa[3][coluna] = '4';
		}
		i++;
	}
}