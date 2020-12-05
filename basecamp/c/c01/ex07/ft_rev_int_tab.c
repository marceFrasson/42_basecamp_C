/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 23:21:36 by mfrasson          #+#    #+#             */
/*   Updated: 2020/11/28 12:28:13 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_rev_int_tab(int *tab, int size)
{
	int i;
	int count;
	int temp;

	i = 0;
	temp = 0;
	count = 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - count];
		tab[size - count] = temp;
		count++;
		i++;
	}
}
