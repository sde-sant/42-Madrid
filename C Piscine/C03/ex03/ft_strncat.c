/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:21:22 by sde-sant          #+#    #+#             */
/*   Updated: 2022/09/01 16:41:39 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "i0";
	
	printf("%s\n", strncat(str2, str1, 3));
	printf("%s\n", ft_strncat(str2, str1, 3));
	return (0);
}
