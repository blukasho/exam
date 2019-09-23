/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:14:43 by blukasho          #+#    #+#             */
/*   Updated: 2019/09/23 18:36:39 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_point.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void	flood_fill(char **area, t_point size, t_point begin)
{
	char	c;

	c = area[begin.y][begin.x];
	area[begin.y][begin.x] = 'F';
	if ((begin.y) - 1 >= 0 && area[(begin.y) - 1][begin.x] == c)
		flood_fill(area, size, (t_point){begin.x, (begin.y) - 1});
	if ((begin.y) + 1 < size.y && area[(begin.y) + 1][begin.x] == c)
		flood_fill(area, size, (t_point){begin.x, (begin.y) + 1});
	if ((begin.x) - 1 >= 0 && area[begin.y][(begin.x) - 1] == c)
		flood_fill(area, size, (t_point){(begin.x) - 1, begin.y});
	if ((begin.x) + 1 < size.x && area[begin.y][(begin.x) + 1] == c)
		flood_fill(area, size, (t_point){(begin.x) + 1, begin.y});
}

static void	print_tab(char **tab)
{
	while (*tab)
		printf("%s\n", *(tab++));
}

static char	**make_area(char **arr)
{
	char	**res;
	int		len;

	len = 0;
	while (arr[len])
		++len;
	res = (char **)malloc(++len * sizeof(char *));
	res[--len] = NULL;
	while (--len >= 0)
		res[len] = strdup(arr[len]);
	return (res);
}

int		main(void)
{
    char **area;
    t_point size = { 8, 5 };
    t_point begin = { 0, 0 };
    char *zone[] = {
        "11111111",
        "10001001",
        "10010001",
        "10110001",
        "11100001",
		NULL
    };
    area = make_area(zone);
    print_tab(area);
    flood_fill(area, size, begin);
	printf("\n");
    print_tab(area);
	return (0);
}
