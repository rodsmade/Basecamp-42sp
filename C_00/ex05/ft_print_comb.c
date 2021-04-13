/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 00:09:13 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/05 00:10:16 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char numero[3];

	numero[0] = '0';
	numero[1] = '0';
	numero[2] = '0';
	while (numero[0] <= '9')
	{
		numero[1] = numero[0] + 1;
		while (numero[1] <= '9' && numero[1] > numero[0])
		{
			numero[2] = numero[1] + 1;
			while (numero[2] <= '9' && numero[2] > numero[1])
			{
				write(1, numero, 3);
				if (!(numero[0] == '7' && numero[1] == '8' && numero[2] == '9'))
					write(1, ", ", 2);
				numero[2]++;
			}
			numero[1]++;
		}
		numero[0]++;
	}
}
