/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:52:24 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/12 10:56:40 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'z')
		{
			if (str[i] > 'Z' && str[i] < 'a')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	if (i == j)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
