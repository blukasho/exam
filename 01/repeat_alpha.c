/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 16:01:50 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/16 16:17:24 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		repeat_alpha(char c)
{
	char	ch;

	if (c >= 'a' && c <= 'z')
		ch = (c - 96);
	else if (c >= 'A' && c <= 'Z')
		ch = (c - 64);
	else
		ch = 1;
	while (ch--)
		write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	char	*str;

	if (argc == 2 && (str = *(++argv)))
		while (*str)
			repeat_alpha(*(str++));
	return (write(1, "\n", 1));
}
