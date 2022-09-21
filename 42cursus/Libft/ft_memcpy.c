/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <sde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:37:45 by sde-sant          #+#    #+#             */
/*   Updated: 2022/09/16 13:27:35 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void* ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	while (n > 0)
	{
		dst = src;
		src++;
		dst++;
		n--;
	}
	return(dst);
}

int main()
{
	char src[] = "Hello";
	char dst[] = "World!";

	printf("%s", ft_memcpy(dst, src, 5));
}