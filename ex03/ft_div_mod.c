/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 05:00:22 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/06 02:31:10 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allowed functions : None
• Create a function ft_div_mod prototyped like this :
• This function divides parameters a by b and stores the result in the int pointed by
div. It also stores the remainder of the division of a by b in the int pointed by mod.
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
