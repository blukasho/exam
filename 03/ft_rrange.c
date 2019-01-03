/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 18:48:20 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/03 18:56:06 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int	*res;
	int	temp;
	int	size;

	size = 0;
	temp = start;
	while (temp++ <= end)
		++size;
	res = (int *)malloc(size * sizeof(int));
	while (--size >= 0)
		res[size] = start++;
	return (res);
}
