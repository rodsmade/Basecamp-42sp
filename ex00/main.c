/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:31 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/10 22:16:37 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mem.h> // malloc, free // oxe nao achou a bib ?????? ñ deixou compilar
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char cima_p_baixo[4];
	char baixo_p_cima[4];
	char esquerda_p_direita[4];
	char direita_p_esquerda[4];
	int mapa[4][4];

	if(ft_input_is_valid(argc, argv))
	{
		cima_p_baixo[0] = *argv[1];
		cima_p_baixo[1] = *argv[2];
		cima_p_baixo[2] = *argv[3];
		cima_p_baixo[3] = *argv[4];
		baixo_p_cima[0] = *argv[5];
		baixo_p_cima[1] = *argv[6];
		baixo_p_cima[2] = *argv[7];
		baixo_p_cima[3] = *argv[8];
		esquerda_p_direita[0] = *argv[9];
		esquerda_p_direita[1] = *argv[10];
		esquerda_p_direita[2] = *argv[11];
		esquerda_p_direita[3] = *argv[12];
		direita_p_esquerda[0] = *argv[13];
		direita_p_esquerda[1] = *argv[14];
		direita_p_esquerda[2] = *argv[15];
		direita_p_esquerda[3] = *argv[16];
	}

	return (0);

}

void sobe_linha(int *linha)
{
	linha--;
}

void desce_linha(int *linha)
{
	linha++;
}

void vai_pra_direita(int *coluna)
{
	coluna++;
}

void vai_pra_esquerda(int *coluna)
{
	coluna--;
}


