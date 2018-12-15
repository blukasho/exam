/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 19:48:32 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/15 19:57:27 by blukasho         ###   ########.fr       */
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
			if (*(str++) == 'a' && write(1, "a\n", 2))
				return (0);
		write(1, "\n", 1);
	}
	else
		write(1, "a\n", 2);
	return (0);
}
