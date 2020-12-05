/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:54:25 by mfrasson          #+#    #+#             */
/*   Updated: 2020/11/26 13:37:26 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** prints sequence of n numbers without repeting combinations
*/

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 48;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (i != 55)
				{
					write(1, ", ", 1);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
