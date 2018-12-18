/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 08:10:28 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/18 09:39:28 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int			get_pos(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 96);
	if (ch >= 'A' && ch <= 'Z')
		return (ch - 64);
	return (0);
}

void		alpha_mirror(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch = 123 - get_pos(ch);
	else if (ch >= 'A' && ch <= 'Z')
		ch = 91 - get_pos(ch);
	write(1, &ch, 1);
}

int			main(int argc, char **argv)
{
	if (argc == 2 && ++argv)
		while (**argv)
			alpha_mirror(*(*argv)++);
	return (write(1, "\n", 1));
}
