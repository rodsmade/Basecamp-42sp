/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pamonha.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:30:49 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/12 00:46:21 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAMONHA_H
# define PAMONHA_H

# include <unistd.h>

int		ft_input_is_valid(int argc, char **argv);
void	ft_prints_map(char g_mapa[16]);
void	ft_checks_for_fours(char g_mapa[16], char hor[2][4], char ver[4][2]);
void	ft_checks_for_ones(char *g_mapa, char hor[2][4], char ver[4][2]);

#endif
