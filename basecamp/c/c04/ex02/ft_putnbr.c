/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:26:45 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/03 23:55:29 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ten_potency(void);

long int g_count;
long int g_temp;
long int g_ten;
long int g_ch;

void		ft_putnbr(int nb)
{
	long int	i;
	long int	nbr;

	i = -1;
	if (nb < 0)
	{
		nbr = nb * i;
		write(1, "-", 1);
	}
	else
		nbr = nb;
	g_temp = nbr;
	g_count = 0;
	g_ten = 1;
	g_ch = 0;
	ten_potency();
	while (g_ten > 0)
	{
		g_ch = (nbr / g_ten) + '0';
		nbr = nbr % g_ten;
		g_ten /= 10;
		write(1, &g_ch, 1);
	}
}

void		ten_potency(void)
{
	while (g_temp >= 10)
	{
		g_temp /= 10;
		g_count++;
	}
	while (g_count > 0)
	{
		g_ten *= 10;
		g_count--;
	}
}
