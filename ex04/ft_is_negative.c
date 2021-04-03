/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:49:40 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/03 19:12:54 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered
as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.
• Here’s how it should be prototyped :
#include <unistd.h>

void ft_is_negative(int n)
{
	if(int<0)
	{
		write(1,'N',1);
	}
	else
	{
		write(1,'P',1);
	}
}
