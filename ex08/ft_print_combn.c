/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:53:09 by roaraujo          #+#    #+#             */
/*   Updated: 2021/04/03 04:53:10 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Create a function that displays all different combinations of n numbers by ascending
order.
• n will be so that : 0 < n < 10.
• If n = 2, here’s the expected output :
$>./a.out | cat -e
01, 02, 03, ..., 09, 12, ..., 79, 89$>
• Here’s how it should be prototyped :
void ft_print_combn(int n);