/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:52:04 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/03 03:15:56 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

void	rush(int x, int y)
{
	char r[2];

	r[1] = 1;
	while (r[1] <= y)
	{
		r[0] = 1;
		while (r[0] <= x)
		{
			if (r[0] == 1 && r[1] == 1)
				ft_putchar('A');
			else if ((r[0] == x && r[1] == 1) || (r[0] == 1 && r[1] == y))
				ft_putchar('C');
			else if (r[0] == x && r[1] == y)
				ft_putchar('A');
			else if (r[0] == 1 || r[0] == x || r[1] == 1 || r[1] == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			r[0]++;
		}
		ft_putchar('\n');
		r[1]++;
	}
}
