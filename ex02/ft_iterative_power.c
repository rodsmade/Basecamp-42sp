/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:40:51 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/15 21:51:04 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int resultado;

	resultado = 0;
	if (power < 0)
		return (resultado);
	if (power == 0)
		return (1);
	resultado += nb;
	while (--power > 0)
		resultado = resultado * nb;
	return (resultado);
}
