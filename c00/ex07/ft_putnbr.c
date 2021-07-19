/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:21:18 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/03 16:09:19 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ten_potency(void);

int g_count;
int g_temp;
int g_ten;
int g_ch;

void		ft_putnbr(int nb)
{
	int negative;

	negative = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		nb = nb - 1;
		write(1, "-", 1);
		negative++;
	}
	g_temp = nb;
	g_count = 0;
	g_ten = 1;
	g_ch = 0;
	ten_potency();
	while (g_ten > 0)
	{
		g_ch = (nb / g_ten) + '0';
		nb = nb % g_ten;
		g_ten /= 10;
		if (negative == 1 && g_ten == 1)
			nb++;
		write(1, &g_ch, 1);
	}
}

void		ten_potency(void)
{
	while (g_temp > 10)
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

int main(void)
{
	ft_putnbr(3);
}