/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 15:45:20 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/28 14:44:33 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char		reverse_bits(unsigned char octet)
{
	unsigned char	r;
	int				i;

	i = 9;
	r = 0;
	while (--i)
	{
		r <<= 1;
		if (octet & 1 == 1)
			r ^= 1;
		octet >>= 1;
	}
	return (r);
}
