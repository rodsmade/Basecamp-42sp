/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_input_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:28 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/10 21:58:05 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_input_is_valid(int argc, char *argv[])
{
	/* Mais validações de entrada
	os parzinhos podem ser: 1-4		2-3		4-1
							1-3		2-2		3-2
							1-2		2-1		3-1

	ñ podem ser:			1-1		2-4		3-3,	4-4
											3-4		4-3
													4-2

		cima_p_baixo[0] < = > baixo_p_cima[0]
  esquerda_p_direita[0]	< = > direita_p_esquerda[0]
		cima_p_baixo[1] < = > baixo_p_cima[1]
  esquerda_p_direita[1]	< = > direita_p_esquerda[1]
		cima_p_baixo[2] < = > baixo_p_cima[2]
  esquerda_p_direita[2]	< = > direita_p_esquerda[2]
		cima_p_baixo[3] < = > baixo_p_cima[3]
  esquerda_p_direita[3]	< = > direita_p_esquerda[3]
	
	*/
	if (argc != 1 + 16)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	while (--argc > 0)
	{
		if (*argv[argc] < '1' || *argv[argc] > '4')	// ñ sei se vai funcionar pq cada argumento é um "string"
		{
			write (1, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}