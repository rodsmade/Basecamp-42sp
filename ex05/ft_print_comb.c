/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:50:55 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/03 20:46:09 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}
