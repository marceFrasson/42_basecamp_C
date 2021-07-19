/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrasson <mfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:56:31 by mfrasson          #+#    #+#             */
/*   Updated: 2020/12/02 19:16:29 by mfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		conditions(char c);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (conditions(str[i - 1]))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!(conditions(str[i - 1])))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		conditions(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else if (c >= '0' && c <= '9')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
