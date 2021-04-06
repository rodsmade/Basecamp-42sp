/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:59:47 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/06 02:29:49 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allowed functions : None
• Create a function that swaps the value of two integers whose addresses are entered
as parameters.
• Here’s how it should be prototyped :
*/

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int guarda_rapidin;
	
	guarda_rapidin = *a;
	*a = *b;
	*b = guarda_rapidin;
}
