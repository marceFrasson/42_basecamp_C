/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:44:49 by mfrasson          #+#    #+#             */
/*   Updated: 2020/11/25 12:52:44 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** prints alfabet
*/

void	ft_print_alphabet(void)
{
	int alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		write(1, &alpha, 1);
		alpha++;
	}
}
