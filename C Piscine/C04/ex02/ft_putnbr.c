/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:12:14 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/31 13:12:15 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}	

void	ft_putnbr(int nb)
{
    int num[10];
	int	i;

	i = 0;
	if (-2147483648 > nb && nb < 0)
	{
		putchar('-');
		nb = nb * -1;
	}
	else if (nb == 0)
		putchar('0');
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	while (nb > 0) 
	{
		num[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	while (--i >= 0)
	{
		putchar(num[i] + '0');
	}
}

/*
int	main(void)
{
	ft_putnbr(9887);
	return (0);
}
*/