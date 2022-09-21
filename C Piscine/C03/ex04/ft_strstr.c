/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:26:30 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/30 21:26:32 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    char *char_res;

    i = 0;
    j = 0;
    char_res = str;
    while (str[i] != *to_find)
    {
        i++;
    }
    while (str[i] != '\0')
    {
        char_res[j] = str[i];
        i++;
        j++;
    }
    char_res[j] = '\0';
    return (*&char_res);
}

/*
int main(void)
{
    char src[] = "asdfghjklñ";
    printf("%s", ft_strstr(src, "a"));
}
*/