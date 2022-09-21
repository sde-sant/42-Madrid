/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:19:40 by sde-sant          #+#    #+#             */
/*   Updated: 2022/09/01 13:56:28 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n - 1)
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
	int	comp;
	char	str1[] = "axc";
	char	str2[] = "axd";

	printf("result = %d\n", strncmp(str1, str2, 2));
	comp = ft_strncmp(str1, str2, 2);
	if (comp  == 1)
		printf("str1 es mayor que str2\n");
	else if (comp == -1)
		printf("str2 es mayor que str1\n");
	else
		printf("str1 y str2 son iguales\n");
	return (0);
}*/
