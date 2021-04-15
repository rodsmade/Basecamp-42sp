/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:47:06 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/15 11:18:59 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			ao_contrario[10];
	unsigned int	entradona;
	int				count;

	entradona = nb;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		entradona = nb * (-1);
	}
	count = 9;
	while (count >= 0)
	{
		ao_contrario[count] = (entradona % 10) + '0';
		entradona = entradona / 10;
		count--;
	}
	while (++count != 42 && nb != 0)
		nb = nb / 10;
	write(1, &ao_contrario[10 - count], count);
}
