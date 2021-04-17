/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:57:20 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/12 00:04:51 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pamonha.h"

void	ft_prints_map(char g_mapa[16])
{
	int linha;

	linha = -1;
	while (++linha < 16)
	{
		write(1, g_mapa + linha, 1);
		write(1, " ", 1);
		if ((linha + 1) % 4 == 0)
			write(1, "\n", 1);
	}
}
