/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_but_for_ones.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:41:14 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/11 17:21:53 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_find_but_for_ones(char *str)
{
	int count_zeroes;
	int i;

	i = -1;
	count_zeroes = 0;
	while (--i < 4)
	{
		if (*str = '0')
			count_zeroes++;
	}
}

int main()
{
	char *str;
	char linha[4] = {'0', '0', '0', '0'};
	
	str = linha;
	ft_find_but_for_ones(str);
}