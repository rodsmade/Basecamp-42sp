/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_cond_met.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:26 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/10 22:18:57 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checa se o resultado encontrado é consistente

int	ft_checks_cond_met(char *)
	LINHAS:
		esquerda_p_direita[0]	|	mapa[0][0] + mapa[0][1] + mapa[0][2] + mapa[0][3]	|	direita_p_esquerda[0]
		esquerda_p_direita[1]	|	mapa[1][0] + mapa[1][1] + mapa[1][2] + mapa[1][3]	|	direita_p_esquerda[1]
		esquerda_p_direita[2]	|	mapa[2][0] + mapa[2][1] + mapa[2][2] + mapa[2][3]	|	direita_p_esquerda[2]
		esquerda_p_direita[3]	|	mapa[3][0] + mapa[3][1] + mapa[3][2] + mapa[3][3]	|	direita_p_esquerda[3]
	COLUNAS:	
		cima_p_baixo[0]			|	mapa[0][0] + mapa[1][0] + mapa[2][0] + mapa[3][0]	|	baixo_p_cima[0]
		cima_p_baixo[1]			|	mapa[0][1] + mapa[1][1] + mapa[2][1] + mapa[3][1]	|	baixo_p_cima[1]
		cima_p_baixo[2]			|	mapa[0][2] + mapa[1][2] + mapa[2][2] + mapa[3][2]	|	baixo_p_cima[2]
		cima_p_baixo[3]			|	mapa[0][3] + mapa[1][3] + mapa[2][3] + mapa[3][3]	|	baixo_p_cima[3]
