/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:33:09 by sde-sant          #+#    #+#             */
/*   Updated: 2022/09/01 13:55:27 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s2[i] > s1[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "abc";
	char	str2[] = "abc";

	printf("result = %d\n", strcmp(str1, str2));
	if (ft_strcmp(str1, str2) == 1)
		printf("str1 es mayor que str2\n");
	else if (ft_strcmp(str1, str2) == -1)
		printf("str2 es mayor que str1\n");
	else
		printf("str1 y str2 son iguales\n");
	return (0);
}*/
