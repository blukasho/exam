/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 16:33:35 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/16 16:40:23 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char **argv)
{
	char	*str;

	if (argc == 2 && (str = *(++argv)))
	{
		while (*str)
			++str;
		while (--str >= *argv)
			write(1, &(*(str)), 1);
	}
	return (write(1, "\n", 1));
}
