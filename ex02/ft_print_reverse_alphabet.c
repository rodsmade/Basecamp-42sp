/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:46:20 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/03 19:10:54 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that displays the alphabet in lowercase, on a single line, by
//descending order, starting from the letter ’z’.
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char caractere;
	caractere='z';
	while(caractere>='a')
	{
		write(1, &caractere, 1);
		caractere--;
	}
}
