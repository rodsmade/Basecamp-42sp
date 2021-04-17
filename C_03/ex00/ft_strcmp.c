/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:44:47 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/15 12:13:52 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int diferenca;

	diferenca = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2 || *s1 > *s2)
		{
			diferenca = *s1 - *s2;
			return (diferenca);
		}
		s1++;
		s2++;
	}
	return (0);
}
