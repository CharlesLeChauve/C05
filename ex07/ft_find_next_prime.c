/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgibert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:53:43 by tgibert           #+#    #+#             */
/*   Updated: 2023/07/25 14:06:03 by tgibert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	if (nb != 2147483647)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_find_next_prime(5310));
}*/
