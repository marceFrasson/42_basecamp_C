/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:47:19 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/05 00:46:31 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *mtrx;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	mtrx = malloc(sizeof(int) * (max - min));
	while (i < max - min)
	{
		mtrx[i] = max - i - 1;
		i++;
	}
	return (mtrx);
}
