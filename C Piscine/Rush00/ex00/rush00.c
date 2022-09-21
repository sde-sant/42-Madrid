/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgarci <enrgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 20:47:48 by enrgarci          #+#    #+#             */
/*   Updated: 2022/08/13 17:41:51 by enrgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define FIRST_LINE_LEFT 111
#define FIRST_LINE_RIGHT 111
#define FIRST_LINE_MIDDLE 45
#define MID_LINE_LEFT 124
#define MID_LINE_RIGHT 124
#define MID_LINE_MIDDLE 32
#define LAST_LINE_LEFT 111
#define LAST_LINE_RIGHT 111
#define LAST_LINE_MIDDLE 45

void	ft_putchar(char c);

void	line(int x, int a, int b, int c)
{
	int	i;

	i = x;
	while (i > 0)
	{
		if (i == x)
			ft_putchar(a);
		else if (i == 1)
			ft_putchar(c);
		else
			ft_putchar(b);
		i--;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = y;
	while (i > 0 && x > 0)
	{
		if (i == y)
			line (x, FIRST_LINE_LEFT, FIRST_LINE_MIDDLE, FIRST_LINE_RIGHT);
		else if (i == 1)
			line (x, LAST_LINE_LEFT, LAST_LINE_MIDDLE, LAST_LINE_RIGHT);
		else
			line (x, MID_LINE_LEFT, MID_LINE_MIDDLE, MID_LINE_RIGHT);
		ft_putchar(10);
		i--;
	}
}
