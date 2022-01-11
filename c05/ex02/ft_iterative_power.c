/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterativ_power.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:07:20 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/23 10:27:58 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	c;

	c = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power != 0)
		{
			c *= nb;
			power--;
		}
		return (c);
	}
}
