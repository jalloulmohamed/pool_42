/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:26:22 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/09 18:26:26 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char y, char w, char x, char z)
{
	write(1, &y, 1);
	write(1, &w, 1);
	write(1, " ", 1);
	write(1, &x, 1);
	write(1, &z, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + 48, a % 10 + 48, b / 10 + 48, b % 10 + 48);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
