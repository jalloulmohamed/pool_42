/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjalloul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:39:00 by mjalloul          #+#    #+#             */
/*   Updated: 2021/08/10 16:14:01 by mjalloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;
	int	j;
	int	k;
	int	*p;

	j = size - 1;
	k = 0;
	p = tab;
	while (j > k)
	{
		i = *(tab + j);
		t = *(p + k);
		*(p + k) = i;
		*(p + j) = t;
		size--;
		j--;
		k++;
	}
}
