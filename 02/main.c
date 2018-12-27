/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 19:36:17 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/27 16:46:59 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void				print_bits(unsigned char octet);
//unsigned char		reverse_bits(unsigned char octet);

int					main(int argc, char **argv)
{
	unsigned char	n = atoi(argv[1]);
	unsigned char	r = 0;
	int				i = 9;
	print_bits(n);
	write(1, "\n", 1);
	while (--i > 0)
	{
		r <<= 1;
		if (n & 1 == 1)
			r ^= 1;
		n >>= 1;
		print_bits(r);
		write(1, "\n", 1);
	}
	return (printf("\n"));
}
