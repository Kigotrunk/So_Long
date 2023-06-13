/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:25:03 by marvin            #+#    #+#             */
/*   Updated: 2023/06/12 15:25:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   *pos_player_x(char **map)
{
    int x;
    int y;

    x = 0;
    y = 0;
    while(map[x])
    {
        while (map[x][y])
        {
            if (map[x][y] == 'p')
                return(x);
            y++;
        }
        x++;
        y = 0;
    }
}

int   *pos_player_y(char **map)
{
    int x;
    int y;

    x = 0;
    y = 0;
    while(map[x])
    {
        while (map[x][y])
        {
            if (map[x][y] == 'p')
                return(y);
            y++;
        }
        x++;
        y = 0;
    }
}

int player_blocked(int  x, int  y, char **map)
{
    int i;

    i = 0;
    if(map[x][y + 1] == '1' && map[x][y - 1] == '1' && map[x + 1][y] == '1' && map[x - 1][y] == '1')
        return (-1);
    while (map[x][y] != 'E')
    {
        
    }
    
}

void    road(char **(map))
{
    int x;
    int y;

    x = pos_player_x(map);
    y = pos_player_y(map);
}