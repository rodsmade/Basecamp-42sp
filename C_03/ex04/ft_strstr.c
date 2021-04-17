/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:35:30 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/15 12:16:48 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int a;
	unsigned int b;

	if (*to_find == '\0')
		return (str);
	a = 0;
	while (*(str + a) != '\0')
	{
		b = 0;
		while (*(str + a + b) == *(to_find + b))
		{
			if (*(to_find + b + 1) == '\0')
				return (str + a);
			b++;
		}
		a++;
	}
	return (0);
}
