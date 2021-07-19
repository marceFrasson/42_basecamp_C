/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:20:59 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/05 11:46:38 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (nb == 0 || power < 0)
	{
		return (0);
	}
	if (nb != 0 && power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (1);
}

#include <stdio.h>

int        main(void)
{
	printf("zero: %i\n", ft_recursive_power(429, -2881));
    printf("zero: %i\n", ft_recursive_power(-3868, -741));
    printf("um %i\n", ft_recursive_power(0, 0));    
    printf("um: %i\n", ft_recursive_power(-2086, 0));
    printf("neg: %i\n", ft_recursive_power(-3390, 1));
	printf("um: %i\n", ft_recursive_power(-2552, 0));
	printf("pos: %i\n", ft_recursive_power(3013, 1));
    printf("neg: %i\n", ft_recursive_power(-6, 7));
    printf("pos: %i\n", ft_recursive_power(-4, 8));
	printf("pos: %i\n", ft_recursive_power(-2, 10));
}