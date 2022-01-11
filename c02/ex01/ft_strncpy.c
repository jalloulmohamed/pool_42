/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:49:57 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/16 09:34:49 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned	int	n)
{
	unsigned int	i;

	i = 0;
	while (!(i == n || src[i] == '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
