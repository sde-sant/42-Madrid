/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_aphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:27:18 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/23 13:43:04 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FIRST_LETTER 97
#define LAST_LETTER 122

void	ft_print_alphabet(void)
{
	int	i;
	int	f;

	i = FIRST_LETTER;
	f = LAST_LETTER;
	while (i <= f)
	{
		write(1, &i, 1);
		i++;
		if (i > f)
		{
			write(1, "\n", 1);
		}
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
