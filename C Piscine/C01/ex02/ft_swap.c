/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:53:55 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/28 03:35:22 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 17;
	ft_swap(&x, &y);
	printf("x ahora es %d\n", x);
	printf("y ahora es %d", y);
	return (0);
}
*/
