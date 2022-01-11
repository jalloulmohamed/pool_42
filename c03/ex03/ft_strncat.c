/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:29:28 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/16 19:31:04 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest,	char *src, unsigned	int nb)
{
	int				x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && y < nb)
	{
		dest[x] = src [y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
