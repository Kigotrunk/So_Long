/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:25:13 by marvin            #+#    #+#             */
/*   Updated: 2023/06/12 15:25:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    tab_map()
{
    char    *read;
    char    **map;
    char    *tmp;

    while(ft_get_next_line(1, read) != 0)
    {
        tmp = ft_strjoin(tmp, read);
    }
    map = ft_split(tmp, '\n');
    if (rectangle(map) == -1)
        exit(-1);
    if (wall(map) == -1)
        exit(-1);
    if (item(map) == 0)
        exit(-1);
}

int rectangle(char **map)
{
    int i;
    int j;
    int x;
    int y;

    i = 0;
    j = 0;
    x = 1;
    y = 0;
    while (map[0][0])
    {
        i++;
    }
    while (map[x])
    {
        while (map[x][y])
        {
            y++;
        }
        if (y != i)
            return (-1);
        x++;
        y = 0;
    }
}

int count_line(char **map)
{
    int i;

    i = 0;
     while (map[i][0])
    {
        i++;
    }
    return (i);   
}

int wall(char **map)
{
    int i;
    int y;

    i = 0;
    y = 1;
    while(map[0][i])
    {
        if (map[0][i] != '1')
            return (-1);
        i++;
    }
    while (y < count_line)
    {
        while (map[y])
        {
            if (map[y][0] != '1' || map[y][i] != '1')
                return(-1);
            y++;
        }
    }
    i = 0;
    while (map[count_line(map)][i])
    {
        if (map[count_line(map)][i] != '1')
            return(-1);
        i++;
    } 
}

int item(char **map)
{
    int i;

    i = 0;
    while (map)
    {
        if (map == 'C')
            i++;
        map++;
    }
    if (i > 0)
        return (1);
    return (-1);
    
}