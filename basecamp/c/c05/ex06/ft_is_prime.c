/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:34:21 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/05 11:48:03 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 2147483647)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	i = 3;
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	printf("s%d\n", ft_is_prime(2));
	printf("n%d\n", ft_is_prime(4));
	printf("s%d\n", ft_is_prime(3));
	printf("n%d\n", ft_is_prime(6));
	printf("s%d\n", ft_is_prime(7));
	printf("\n");
	printf("s%d\n", ft_is_prime(157));
	printf("s%d\n", ft_is_prime(401));
	printf("n%d\n", ft_is_prime(22));
	printf("s%d\n", ft_is_prime(691));
	printf("n%d\n", ft_is_prime(542));
	printf("\n");
	printf("s%d\n", ft_is_prime(839));
	printf("n%d\n", ft_is_prime(788));
	printf("s%d\n", ft_is_prime(997));
	printf("s%d\n", ft_is_prime(2147483647));
}