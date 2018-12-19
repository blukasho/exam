/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 08:15:26 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/19 08:53:08 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*res;
	char	*tmp;

	res = src;
	while (*(res++))
		;
	res = (char *)malloc((res - src) * sizeof(char));
	tmp = res;
	if (res)
		while (*src && (*(res++) = *(src++)))
			;
	return (tmp);
}
