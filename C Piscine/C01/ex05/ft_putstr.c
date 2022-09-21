/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:21:00 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/30 23:02:08 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include <stdio.h>
#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		put_char(str[i]);
		i++;
	}
}

/*
int main()
{
    char string[] = "Hello World";
    ft_putstr(string);
}
*/
