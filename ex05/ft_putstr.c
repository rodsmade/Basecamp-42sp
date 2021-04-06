/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 05:01:23 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/06 02:57:39 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allowed functions : write
• Create a function that displays a string of characters on the standard output.
• Here’s how it should be prototyped :
*/

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1,str,1);
		str++;
	}
}

int main(){
	char Hullo[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};
	ft_putstr(Hullo);
	return 0;
}