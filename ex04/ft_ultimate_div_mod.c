/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 05:00:51 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/06 02:34:42 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allowed functions : None
• Create a function ft_ultimate_div_mod with the following prototype :
• This function divides parameters a by b. The result of this division is stored in the
int pointed by a. The remainder of the division is stored in the int pointed by b.
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int segura_aqui_rapidao;
	
	segura_aqui_rapidao = *a;
	*a = *a / *b;
	*b = segura_aqui_rapidao % *b; 
}