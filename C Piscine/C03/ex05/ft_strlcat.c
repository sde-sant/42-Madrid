/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:22:04 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/30 22:22:06 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//    #include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    while (j != size && dest[j] != '\0')
    {
        j++;
    }
    size = i + j;
    return (size);
}

/*
int main(void)
{
    char src[] = "1234567890";
    char dest[] = "1234567890";
    printf("%d\n", ft_strlcat(dest, src, 100));
    return (0);
}
*/