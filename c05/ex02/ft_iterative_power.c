/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:54:05 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/05 11:46:12 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = power;
	result = 1;
	if (power == 0)
	{
		return (1);
	}
	if (nb == 0 || power < 0)
	{
		return (0);
	}
	while (nb != 0 && i > 0)
	{
		result *= nb;
		i--;
	}
	return (result);
}

#include <stdio.h>

int        main(void)
{
	printf("zero: %i\n", ft_iterative_power(429, -2881));
    printf("zero: %i\n", ft_iterative_power(-3868, -741));
    printf("um %i\n", ft_iterative_power(0, 0));    
    printf("um: %i\n", ft_iterative_power(-2086, 0));
    printf("neg: %i\n", ft_iterative_power(-3390, 1));
	printf("um: %i\n", ft_iterative_power(-2552, 0));
	printf("pos: %i\n", ft_iterative_power(3013, 1));
    printf("neg: %i\n", ft_iterative_power(-6, 7));
    printf("pos: %i\n", ft_iterative_power(-4, 8));
	printf("pos: %i\n", ft_iterative_power(-2, 10));
}