/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 15:58:05 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/28 16:10:14 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char		swap_bits(unsigned char octet)
{
	unsigned char	tmp;

	tmp = octet;
	octet <<= 4;
	tmp >>= 4;
	octet |= tmp;
	return (octet);
}
