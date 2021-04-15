/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 21:06:03 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/15 21:47:36 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (n <= nb/2)
	{
		if (nb % n == 0)
			return (0); // não eh
		n++;
	}
	return (1); // eh primo
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return nb;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

#include <stdio.h>
int main()
{
	int nb = 2147483647;
	printf("Próximo primo de %d é: %d\n", nb, ft_find_next_prime(nb));
	return 0;
}