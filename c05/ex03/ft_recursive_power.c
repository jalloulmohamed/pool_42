/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:33:40 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/23 12:11:46 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		nb *= ft_recursive_power(nb, power - 1);
		return (nb);
	}
}
