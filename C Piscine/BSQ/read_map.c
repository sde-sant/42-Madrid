/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-sant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:35:12 by sde-sant          #+#    #+#             */
/*   Updated: 2022/08/31 13:35:13 by sde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] > s2[i])
            return (0);
        else if (s2[i] > s1[i])
            return (1);
        i++;
    }
    return (2);
}

int main(int argc, char *argv[])
{
    FILE    *file;
    char    ch;

    file = fopen("map", "r");
    ch = '\0';
    if (argc == 2)
    {
        if (ft_strcmp(argv[1], "map") == 2)
            {
                write(1, "Mapa encontrado, mostrando...\n\n", 31);
            }
        else
        {
            write(1, "Error: Archivo incorrecto", 25);
            return (0);
        }
    }
    write(1, "Error: No hay archivo", 22);
    return (0);
}
