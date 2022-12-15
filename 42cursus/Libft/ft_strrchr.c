/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <sde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:37:47 by sde-sant          #+#    #+#             */
/*   Updated: 2022/12/15 20:34:40 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	// char	chr;
	int		i;

	i = sizeof(*s);
	while ((s[i] != c) || i >= 0)
		i--;
	if (i < 0)
		return (NULL);
	else
	{
		
	}
}

int	main(void)
{
	char	s[]="Hello World!";
	printf("%lu", sizeof(s));
	ft_strrchr(s, 'p');
}
