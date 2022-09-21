/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:24:53 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/31 22:54:20 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*lowcase_all(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	lowcase_all(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j != 0)
			{
				str[i] -= 32;
				j = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	string[] = "Salut, coMment tU vas ? 42mots quaraNte-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(string));
}*/
