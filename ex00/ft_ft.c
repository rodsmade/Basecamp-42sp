/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:58:36 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/06 02:27:50 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_ft.c
Allowed functions : None
• Create a function that takes a pointer to int as a parameter, and sets the value "42"
to that int.
• Here’s how it should be prototyped :
*/

#include <stdio.h>

void	ft_ft(int *nbr){
	*nbr = 42;
}

int main()
{
	int muda_aqui;
	int *pontero;
	
	pontero = &muda_aqui;
	ft_ft(pontero);
	printf("%d\n", muda_aqui);
	return 0;
}