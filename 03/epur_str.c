/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 13:42:23 by blukasho          #+#    #+#             */
/*   Updated: 2019/04/26 14:01:28 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			is_space_tab(char c)
{
	return ((c == ' ' || c == '\t') ? 1 : 0);
}

int			has_word(char *str)
{
	while (*str)
		if (!is_space_tab(*(str++)))
				return (1);
	return (0);
}

void		epur_str(char *str)
{
	int		i;

	i = 1;
	while (*str)
	{
		i = 0;
		while (*str && is_space_tab(*str))
			++str;
		while (*str && !is_space_tab(*str) && (i = 1))
			write(1, (str++), 1);
		if (*str && has_word(str))
			write(1, " ", 1);
	}
}

int			main(int argc, char **argv)
{
	--argc;
	++argv;
	if (argc == 1)
		epur_str(*argv);
	write(1, "\n", 1);
	return (0);
}
