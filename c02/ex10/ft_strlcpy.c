/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:20:29 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/19 12:40:09 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned	int	ft_strlcpy(char *dest, char	*src, unsigned	int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		while (!(i == size - 1) && src[i] != '\0')
		{
			if (size != 0)
			{
				dest[i] = src[i];
			}
			i++;
		}
		j++;
	}
	dest[i] = '\0';
	return (j);
}
