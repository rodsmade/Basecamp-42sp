/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:51:29 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/05 00:20:35 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		par_esquerda;
	int		par_direita;
	char	par_dir[2];
	char	par_esq[2];

	par_esquerda = 00;
	par_direita = par_esquerda + 1;
	while (par_esquerda <= 98)
	{
		while (par_direita <= 99)
		{
			par_esq[1] = (par_esquerda % 10) + '0';
			par_esq[0] = ((par_esquerda / 10) % 10) + '0';
			par_dir[1] = (par_direita % 10) + '0';
			par_dir[0] = ((par_direita / 10) % 10) + '0';
			write(1, par_esq, 2);
			write(1, " ", 1);
			write(1, par_dir, 2);
			if (par_esquerda != 98)
				write(1, ", ", 2);
			par_direita++;
		}
		par_esquerda++;
		par_direita = par_esquerda + 1;
	}
}
