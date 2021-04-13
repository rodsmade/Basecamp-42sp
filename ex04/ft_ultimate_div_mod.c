/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 05:00:51 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/06 15:55:45 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int segura_aqui_rapidao;

	segura_aqui_rapidao = *a;
	*a = *a / *b;
	*b = segura_aqui_rapidao % *b;
}
