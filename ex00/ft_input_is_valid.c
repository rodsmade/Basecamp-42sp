/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_is_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:28 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/12 00:04:29 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pamonha.h"

// TODO: Implementar validação dos parzinhos se der tempo
// // int ft_impossible_pairs(int argc, char **argv)
// // {
// /* Mais validações de entrada
// 	os parzinhos podem ser: 1-4		2-3		4-1
// 							1-3		2-2		3-2
// 							1-2		2-1		3-1
// 	ñ podem ser:			1-1		2-4		3-3,	4-4
// 											3-4		4-3
// 													4-2
// 		cima_p_baixo[0] < = > baixo_p_cima[0]
//   esquerda_p_direita[0]	< = > direita_p_esquerda[0]
// 		cima_p_baixo[1] < = > baixo_p_cima[1]
//   esquerda_p_direita[1]	< = > direita_p_esquerda[1]
// 		cima_p_baixo[2] < = > baixo_p_cima[2]
//   esquerda_p_direita[2]	< = > direita_p_esquerda[2]
// 		cima_p_baixo[3] < = > baixo_p_cima[3]
//   esquerda_p_direita[3]	< = > direita_p_esquerda[3]
// 	*/

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
			return (1);
		write(1, "Error\n", 6);
		return (0);
	}
	write(1, "Error\n", 6);
	return (0);
}
