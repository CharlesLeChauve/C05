/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgibert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:08:18 by tgibert           #+#    #+#             */
/*   Updated: 2023/07/25 10:41:16 by tgibert          ###   ########.fr       */
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
	else if (power < 0)
		return(0);
	else
	{
		while (i < power)
		{
			nbr *= nb;
			i++;
		}
	}
	return (nbr);
}/*
#include <stdio.h>
int	main(void)
{
	printf("0:%d\n", ft_iterative_power(1, -10));
	printf("0:%d\n", ft_iterative_power(1, -1));
	printf("1:%d\n", ft_iterative_power(10, 0));
	printf("10:%d\n", ft_iterative_power(10, 1));
	printf("100:%d\n", ft_iterative_power(10, 2));
	printf("216:%d\n", ft_iterative_power(6, 3));
}
int main(void)
{
	printf("%d", ft_iterative_power(6, 3));
}*/
