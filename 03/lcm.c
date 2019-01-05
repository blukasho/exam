/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 17:44:35 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/05 18:29:19 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	hcf(unsigned int a, unsigned int b)
{
	unsigned int	res;

	res = 0;
	while (b != 0)
	{
		res = a % b;
		a = b;
		b = res;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	return ((!a || !b ? 0 : (a * b) / hcf(a, b)));
}
