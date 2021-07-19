/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:15:37 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/05 11:47:45 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt_recursive(int nb, long int i);

int		ft_sqrt(int nb)
{
	long int i;

	i = 1;
	return (ft_sqrt_recursive(nb, i));
}

int		ft_sqrt_recursive(int nb, long int i)
{
	if ((i * i) == nb)
	{
		return (i);
	}
	else if ((i * i) > nb)
	{
		return (0);
	}
	return (ft_sqrt_recursive(nb, (i + 1)));
}

#include <stdio.h>

int main(void)
{
	printf("%d", ft_sqrt(625));
}

