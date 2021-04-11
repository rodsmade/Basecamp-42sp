/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_is_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obrescia <obrescia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:28 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/11 04:06:54 by obrescia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// int ft_input_is_valid(int argc, char **argv)
// {
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

int 	ft_arg_is_valid(int argc, char **argv)
	{
		if (argc == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}	
	}

int 	ft_argv_is_valid(int argc, char **argv)
	{
		int a;

		a = 0;
		while (argv[1][a])
			{
				if (argv[1][a] != ' ')
				{
					if (argv[1][a] > '0' && argv[1][a] < '5')
						{				
							//FAZ O ARRAY
							return (1);
						}
					else
						{
							return (0);
						}	
					a++;
				}
			}
	}


int main(int argc, char **argv)
{	
	if(ft_arg_is_valid(argc, argv))
	{
		if (ft_argv_is_valid(argc, argv))
		{
			printf("Tudo certo!\n");
			return (0);
		}
	else
	{
		write (1, "Error\n", 6);
	}
}

