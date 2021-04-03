/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:44:17 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/03 19:10:50 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# Create a function that displays the alphabet in lowercase, on a single line, by
//ascending order, starting from the letter ’a’.
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char caractere;
	caractere='a';
	while(caractere<='z')
	{
		write(1, &caractere, 1);
		caractere++;
	}
}
