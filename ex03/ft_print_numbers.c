/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:47:51 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/03 05:12:10 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays all digits, on a single line, by ascending order.
void	ft_print_numbers(void)
{
	int numero;
	numero=0;
	while(numero<10)
	{
		write(1, &numero, 1);
		numero++;
	}
}