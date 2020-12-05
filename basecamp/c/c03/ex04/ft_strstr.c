/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:59:54 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/02 16:34:40 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		check(int i, char *src, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (to_find[i] == 0)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (check(i, str, to_find))
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}

int		check(int i, char *str, char *to_find)
{
	int j;

	j = 0;
	while (to_find[j] != '\0')
	{
		if (str[i + j] != to_find[j])
		{
			return (0);
		}
		j++;
	}
	return (1);
}
