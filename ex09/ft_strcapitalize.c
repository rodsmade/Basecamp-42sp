/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:53:27 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/10 16:24:54 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alphanumeric(char *str)
{
	if ((*str >= '0' && *str <= '9')
	|| (*str >= 'A' && *str <= 'Z')
	|| (*str >= 'a' && *str <= 'z'))
		return (1);
	else
		return (0);
}

int		ft_find_next_word(char *str)
{
	int next_word;

	next_word = 1;
	while (ft_char_is_alphanumeric(str))
	{
		next_word++;
		str++;
	}
	return (next_word);
}

char	*ft_handle_word(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	str++;
	while (ft_char_is_alphanumeric(str))
	{
		if ((*str >= 'A' && *str <= 'Z')
		&& !((*str - 1) >= '0' && (*str - 1) <= '9'))
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	while (*str != '\0')
	{
		if (ft_char_is_alphanumeric(str))
		{
			ft_handle_word(str);
			str += ft_find_next_word(str);
		}
		else
			str += ft_find_next_word(str);
	}
	return (str);
}
