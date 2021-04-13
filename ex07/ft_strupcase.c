/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:21:30 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/08 19:16:30 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*endereco_inicial;

	endereco_inicial = str;
	while (*str != '\0')
	{
		if (*str > 96 && *str < 123)
			*str -= 32;
		str++;
	}
	return (endereco_inicial);
}
