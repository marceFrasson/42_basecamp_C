/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:51:37 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/05 11:45:30 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

#include <stdio.h>

int main(void)
{
	printf("0 = %d\n", ft_iterative_factorial(-65));
	printf("1 = %d\n", ft_iterative_factorial(0));
	printf("1 = %d\n", ft_iterative_factorial(1));
	printf("2 = %d\n", ft_iterative_factorial(2));
	printf("479001600 = %d\n", ft_iterative_factorial(12));
	printf("6 = %d\n", ft_iterative_factorial(3));
	printf("24 = %d\n", ft_iterative_factorial(4));
	printf("120 = %d\n", ft_iterative_factorial(5));
	printf("720 = %d\n", ft_iterative_factorial(6));
	printf("5040 = %d\n", ft_iterative_factorial(7));
	printf("40320 = %d\n", ft_iterative_factorial(8));
	printf("3262880 = %d\n", ft_iterative_factorial(9));
	printf("39916800 = %d\n", ft_iterative_factorial(11));
}