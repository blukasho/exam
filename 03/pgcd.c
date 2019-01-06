/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 11:28:55 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/06 12:24:49 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	pgcd(int a, int b)
{
	int		i;
	int		r;

	i = 0;
	r = 0;
	while (++i && i < a && i < b)
		if (a % i == 0 && b % i == 0)
			r = i;
	return (r);
}

int			main(int argc, char **argv)
{
	if (argc == 3 && atoi(argv[1]) > 0 && atoi(argv[2]) > 0)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	return (printf("\n"));
}
