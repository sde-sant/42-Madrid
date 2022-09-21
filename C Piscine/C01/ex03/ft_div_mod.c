/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:41:10 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/26 12:54:01 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	res_div;
	int	res_mod;

	ft_div_mod(10, 5, &res_div, &res_mod);
	printf("a entre b = %d\n", res_div);
	printf("modulo de a entre b = %d\n", res_mod);
	return (0);
}
*/