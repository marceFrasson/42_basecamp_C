/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:12:06 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/01 15:16:01 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = size;
	while (src[i] != '\0' && size != 0)
	{
		if (i < len - 1)
		{
			dest[i] = src[i];
		}
		i++;
	}
	dest[-1] = '\0';
	return (i);
}
