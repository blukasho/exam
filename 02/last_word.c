/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 16:10:41 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/23 16:28:31 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int			check_delim(char c)
{
	return ((c == ' ' || c == '\t' ? 1 : 0));
}

void		last_word(char *s)
{
	char	*t;

	t = s;
	while (*s)
		++s;
	--s;
	while (check_delim(*s) && s > t)
		--s;
	while (!check_delim(*s) && s > t)
		--s;
	++s;
	while (!check_delim(*s) && *s)
		write(1, &(*(s++)), 1);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	return(write(1, "\n", 1));
}
