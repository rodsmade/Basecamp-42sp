/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_for_fours.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebecca <arebecca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:37:02 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/12 01:33:27 by arebecca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pamonha.h"

void	ft_checks_for_ver(char *g_mapa, char ver[4][2], int i)
{
	if (ver[i][0] == '4')
	{
		*(g_mapa + (i * 4 + 0)) = '1';
		*(g_mapa + (i * 4 + 1)) = '2';
		*(g_mapa + (i * 4 + 2)) = '3';
		*(g_mapa + (i * 4 + 3)) = '4';
	}
	if (ver[i][1] == '4')
	{
		*(g_mapa + (i * 4 + 3)) = '1';
		*(g_mapa + (i * 4 + 2)) = '2';
		*(g_mapa + (i * 4 + 1)) = '3';
		*(g_mapa + (i * 4 + 0)) = '4';
	}
}

void	ft_checks_for_hor(char *g_mapa, char hor[2][4], int i)
{
	if (*hor[i] == '4')
	{
		*(g_mapa + (0 * 4 + i)) = '1';
		*(g_mapa + (1 * 4 + i)) = '2';
		*(g_mapa + (2 * 4 + i)) = '3';
		*(g_mapa + (3 * 4 + i)) = '4';
	}
	if (hor[1][i] == '4')
	{
		*(g_mapa + (3 * 4 + i)) = '1';
		*(g_mapa + (2 * 4 + i)) = '2';
		*(g_mapa + (1 * 4 + i)) = '3';
		*(g_mapa + (0 * 4 + i)) = '4';
	}
}

void	ft_checks_for_fours(char *g_mapa, char hor[2][4], char ver[4][2])
{
	int i;

	i = -1;
	while (++i < 4)
	{
		ft_checks_for_ver(g_mapa, ver, i);
		ft_checks_for_hor(g_mapa, hor, i);
	}
}
