/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:55:00 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/28 02:53:13 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dat_a;
	int	dat_b;

	dat_a = *a;
	dat_b = *b;
	*a = dat_a / dat_b;
	*b = dat_a % dat_b;
}

/*
int main()
{
    int x;
    int y;

    printf("Introduce un valor para x: ");
    scanf("%d", &x);
    printf("Introduce un valor para y: ");
    scanf("%d", &y);
    ft_ultimate_div_mod(&x, &y);
    printf("x entre y = %d\n", x);
    printf("modulo de x entre y = %d\n", y);
    return (0);
}
*/
