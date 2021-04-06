/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 05:02:35 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/06 15:57:01 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int guarda_rapidin;

	guarda_rapidin = *a;
	*a = *b;
	*b = guarda_rapidin;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int count;

	count = 0;
	while (count++ <= (size / 2) + 1)
	{
		ft_swap(tab, tab + size - count);
		tab++;
		size--;
	}
}
