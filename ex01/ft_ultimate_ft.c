/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:59:15 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/05 22:24:44 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allowed functions : None
• Create a function that takes a pointer to pointer to pointer to pointer to pointer
to pointer to pointer to pointer to pointer to int as a parameter and sets the value
"42" to that int.
• Here’s how it should be prototyped :
*/

#include <stdio.h>

void ft_ultimate_ft(int **nbr){
	**nbr = 42;
}

int main()
{
	int muda_aqui;
	int *potero1;
	int **potero2;
	
	muda_aqui = 0;
	potero1 = &muda_aqui;
	potero2 = &potero1;
	ft_ultimate_ft(potero2);
	printf("%d\n", muda_aqui);
	return 0;
}
