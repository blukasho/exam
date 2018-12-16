/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 10:47:11 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/16 11:05:47 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char **argv)
{
	char	*str;

	if (argc > 1)
	{
		str = *(++argv);
		while (*str)
			write(1, &(*(str++)), 1);
	}
	write(1, "\n", 1);
	return (0);
}
