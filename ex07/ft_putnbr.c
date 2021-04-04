/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_putnbr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: roaraujo <roaraujo@student.42sp.org.br>	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/04/03 04:52:31 by roaraujo		  #+#	#+#			 */
/*   Updated: 2021/04/04 13:30:38 by roaraujo		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

// • Create a function that displays the number entered as a parameter. The function
// has to be able to display all possible values within an int type variable.
// • Here’s how it should be prototyped :
// • For example:
// ◦ ft_putnbr(42) displays "42"

#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		write(1,"-",1);
		nb = nb * (-1);
	}
	int teste;
	int teste_mod;
	int ao_contrario[5];
	int loop;
	int count;
	
	if(nb == 0)
	{
		write(1,"0",1);
	}
	else 
	{
		teste = 82567;
		count = 4;
	
		while (teste > 1)
		{
			teste_mod = teste % 10;
			ao_contrario[count] = teste_mod;
			teste = teste / 10;	
			count--;
		}
		loop = 0;	
		while(loop < 5)
		{
			printf("%d", ao_contrario[loop]);
			loop++;
		}
	}
}
