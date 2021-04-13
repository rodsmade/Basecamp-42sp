/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:40:36 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/10 11:40:36 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*endereco_inicial;

	endereco_inicial = str;
	while (*str != '\0')
	{
		if (*str > 64 && *str < 91)
			*str += 32;
		str++;
	}
	return (endereco_inicial);
}
