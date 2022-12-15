/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <sde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:37:47 by sde-sant          #+#    #+#             */
/*   Updated: 2022/12/15 14:22:47 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = sizeof(*s);
	while ((s[i] != c) || i >= 0)
	{
		i--;
	}
	if (i < 0)
	{
		return NULL;
	}
}

// int main(void)
// {
//   char buf[40] = "Hello World!";
//   char * ptr;
//   int    ch = 'p';
 
//   /* This illustrates strchr */
//   ptr = strchr( buf, ch );
//   printf( "The first occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
//   printf("%s\n", ptr);
 
//   /* This illustrates strrchr */
//   ptr = strrchr( buf, ch );
//   printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
//   printf("%s", ptr);
// }