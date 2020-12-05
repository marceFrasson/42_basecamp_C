/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:58:11 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/05 00:46:38 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *mtrx;

	i = 0;
	mtrx = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(mtrx = malloc(sizeof(int) * (max - min))))
	{
		return (-1);
	}
	while (i < max - min)
	{
		mtrx[i] = min + i;
		i++;
	}
	*range = mtrx;
	return (i);
}
