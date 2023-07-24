/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgibert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:49:04 by tgibert           #+#    #+#             */
/*   Updated: 2023/07/24 13:22:06 by tgibert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (0);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else 
		return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("0:%d\n", ft_recursive_power(1, -10));
	printf("0:%d\n", ft_recursive_power(1, -1));
	printf("1:%d\n", ft_recursive_power(10, 0));
	printf("10:%d\n", ft_recursive_power(10, 1));
	printf("100:%d\n", ft_recursive_power(10, 2));
	printf("216:%d\n", ft_recursive_power(6, 3));
}
int	main(void)
{
	printf("%i\n", ft_recursive_power(6, 3));
}*/
