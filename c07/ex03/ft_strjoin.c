/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:08:21 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/05 00:46:52 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *dest)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i++] != '\0')
	{
		dest[i - 1] = src[i - 1];
	}
	dest[i - 1] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += (size - 1) * ft_strlen(sep) + 1;
	if (!(str = malloc(sizeof(char) * len)))
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i++ < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}
