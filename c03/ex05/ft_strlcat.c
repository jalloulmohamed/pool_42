/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:28:04 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/22 11:54:23 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				y;
	unsigned int	x;

	x = 0;
	y = 0;
	while (dest[x] != '\0' && x != size)
	{
		x++;
	}
	while (src[y] != '\0' )
	{
		if ((x + 1) < size)
		{
			dest[x] = src[y];
			dest[x + 1] = '\0';
		}
		y++;
		x++;
	}
	return (x);
}
