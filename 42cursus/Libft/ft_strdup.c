/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <sde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:37:47 by sde-sant          #+#    #+#             */
/*   Updated: 2022/09/23 01:33:29 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1dup;
	int		i;

	i = 0;
	if (!(s1dup = (char*)malloc(sizeof(*s1))))
		return (NULL);
	while (s1[i])
	{
		s1dup[i] = s1[i];
		i++;
	}
	return (s1dup);
}
