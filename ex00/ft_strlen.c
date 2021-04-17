/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:41:26 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/13 19:58:19 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int string_length;

	string_length = 0;
	while (*str != '\0')
	{
		string_length++;
		str++;
	}
	return (string_length);
}
