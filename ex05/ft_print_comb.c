/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:50:55 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/03 20:34:25 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays all different combinations of three different digits in
// ascending order, listed by ascending order - yes, repetition is voluntary.
// • Here’s the intended output :
// $>./a.out | cat -e
// 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
// • 987 isn’t there because 789 already is.
// • 999 isn’t there because the digit 9 is present more than once.
// • Here’s how it should be prototyped :

#include <unistd.h>

void	ft_print_comb(void)
{
	char centena;
	char dezena;
	char unidade;
	
	centena='0';
	dezena='0';
	unidade='0';
	
	while(centena<='9')
	{
		dezena=centena+1;
		while(dezena<='9' && dezena>centena)
		{
			unidade=dezena+1;
			while(unidade<='9' && unidade>dezena)
			{
				write(1,&centena,1);
				write(1,&dezena,1);
				write(1,&unidade,1);
				if(!(centena=='7' && dezena=='8' && unidade=='9'))
				{
					write(1, ", ", 2);
				}
				unidade++;
			}
			dezena++;
		}
		centena++;
	}
	
	write(1, "FINZAO", 6);
	write(1, &centena, 1);
	write(1, &dezena, 1);
	write(1, &unidade, 1);
}
