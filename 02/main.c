/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 19:36:17 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/20 19:47:56 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_power_of_2(unsigned int n);
int		ft_is_power_of_2(unsigned int n);

int		main(int argc, char **argv)
{
	int	n;

	n = -1;
	while (++n < 1000)
		printf("result %d %d %d\n", n, is_power_of_2(n), ft_is_power_of_2(n));
	return (printf("\n"));
}
