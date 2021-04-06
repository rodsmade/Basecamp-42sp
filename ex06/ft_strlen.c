/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 05:02:05 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/06 15:56:20 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int qtd_caracteres;

	qtd_caracteres = 0;
	while (*str != '\0')
	{
		qtd_caracteres++;
		str++;
	}
	return (qtd_caracteres);
}
