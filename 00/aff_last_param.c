/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 11:15:12 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/16 11:18:24 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char **argv)
{
	char	*str;

	if (argc > 1)
	{
		str = *(argv + (--argc));
		while (*str)
			write(1, &(*(str++)), 1);
	}
	write(1, "\n", 1);
	return (0);
}
