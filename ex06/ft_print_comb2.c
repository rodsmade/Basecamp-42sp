/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:51:29 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/03 22:45:35 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays all different combination of two digits between 00
// and 99, listed by ascending order.
// • Here’s the expected output :
// $>./a.out | cat -e
// 00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
// • Here’s how it should be prototyped :
#include <unistd.h>

void	ft_print_comb2(void)
{
	char dezena_par_dir;
	char unidade_par_dir;
	char dezena_par_esq;
	char unidade_par_esq;

	// dezena_par_esq = '0';
	// 
	// while (dezena_par_esq <= '9')
	// {
	// 	unidade_par_esq = '0';
	// 	while (unidade_par_esq <= '9')
	// 	{
	// 		dezena_par_dir
	// 		write(1, &dezena_par_esq, 1);
	// 		write(1, &unidade_par_esq, 1);
	// 		write(1, " ", 1);
	// 		unidade_par_esq++;
	// 	}
	// 	dezena_par_esq++;
	// }

	dezena_par_dir = '0';
	bg
	while (dezena_par_dir <= '9')
	{
		unidade_par_dir = '0';
		while (unidade_par_dir <= '9')
		{
			dezena_par_dir
			write(1, &dezena_par_dir, 1);
			write(1, &unidade_par_dir, 1);
			write(1, " ", 1);
			unidade_par_dir++;
		}
		dezena_par_dir++;
	}
}

int main(){
	ft_print_comb2();
	return 0;
}