/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:27:23 by mfrasson          #+#    #+#             */
/*   Updated: 2020/11/29 12:07:30 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** prints couple sequence combinations of numbers without repeating
*/
void	print(void);

int g_first;
int g_second;
int g_third;
int g_fourth;

void	ft_print_comb2(void)
{
	g_first = 48;
	g_second = 48;
	g_third = 48;
	g_fourth = 48;
	while (g_first <= 57)
	{
		while (g_second <= 57)
		{
			g_fourth = g_second + 1;
			while (g_third <= 57)
			{
				print();
				g_fourth = 48;
				g_third++;
			}
			g_third = g_first;
			g_second++;
		}
		g_second = 48;
		g_first++;
		g_third = g_first;
	}
}

void	print(void)
{
	while (g_fourth <= 57)
	{
		write(1, &g_first, 1);
		write(1, &g_second, 1);
		write(1, " ", 1);
		write(1, &g_third, 1);
		write(1, &g_fourth, 1);
		if (g_first == 57 && g_second == 56 && g_third == 57 && g_fourth == 57)
		{
			break ;
		}
		else
		{
			write(1, ", ", 2);
		}
		g_fourth++;
	}
}
