/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 17:09:14 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/03 17:49:22 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int	size;
	int	temp;
	int	*res;

	temp = start;
	size = 0;
	while (temp <= end && ++size)
		++temp;
	res = (int *)malloc(size * sizeof(int));	
	while (start <= end)
		res[--size] = end--;
	return (res);
}
