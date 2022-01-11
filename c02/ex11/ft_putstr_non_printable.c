/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:02:16 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/16 14:34:41 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr_non_printable(char	*str)
{
	int					i;
	unsigned char		j;
	char				*a;

	i = 0;
	a = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] == 127 )
		{
			j = (unsigned char)str[i];
			write(1, "\\", 1);
			write(1, &a[j / 16], 1);
			write(1, &a[j % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
