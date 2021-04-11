/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:31 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/11 19:35:27 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pamonha.h"

int	main(int argc, char *argv[])
{
	char cima_p_baixo[4];
	char baixo_p_cima[4];
	char esquerda_p_direita[4];
	char direita_p_esquerda[4];
	int mapa[4][4];

	if(ft_input_is_valid(argc, argv))
	{
		cima_p_baixo[0] = argv[1][0];
		cima_p_baixo[1] = argv[1][2];
		cima_p_baixo[2] = argv[1][4];
		cima_p_baixo[3] = argv[1][6];
		baixo_p_cima[0] = argv[1][8];
		baixo_p_cima[1] = argv[1][10];
		baixo_p_cima[2] = argv[1][12];
		baixo_p_cima[3] = argv[1][14];
		esquerda_p_direita[0] = argv[1][16];
		esquerda_p_direita[1] = argv[1][18];
		esquerda_p_direita[2] = argv[1][20];
		esquerda_p_direita[3] = argv[1][22];
		direita_p_esquerda[0] = argv[1][24];
		direita_p_esquerda[1] = argv[1][26];
		direita_p_esquerda[2] = argv[1][28];
		direita_p_esquerda[3] = argv[1][30];

		printf("cima_p_baixo[0]: %c\n", argv[1][0]);
		return (1);
	}
	printf("entrada errada");
	return (0);
}
