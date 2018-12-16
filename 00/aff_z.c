/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 11:22:21 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/16 11:32:28 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = *(++argv);
		while (*str)
			if (*(str++) == 'z')
				return (write(1, "z\n", 2));
		write(1, "\n", 1);
	}
	else
		write(1, "z\n", 2);
	return (0);
}
