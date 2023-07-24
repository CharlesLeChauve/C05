/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgibert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:08:18 by tgibert           #+#    #+#             */
/*   Updated: 2023/07/24 13:23:01 by tgibert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	nbr = nb;
	i = 1;
	if (power == 0)
		return (1);
	else if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (0);
	else
	{
		while (i < power)
		{
			nbr *= nb;
			i++;
		}
	}
	return (nbr);
}
/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_iterative_power(6, 3));
}*/
