/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 12:27:58 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/30 13:19:48 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_split(char c)
{
	return ((c >= 1 && c <= 32 ? 1 : 0));
}

char	*print_word(char *s)
{
	while (*s && !is_split(*s))
		write(1, &(*(s++)), 1);
	return (s);
}

void	expand_str(char *s)
{
	int	sw;

	while (is_split(*s) && !(sw = 0))
		++s;
	while (*s)
		if (!is_split(*s))
		{
			if (sw)
				write(1, "   ", 3);
			s = print_word(s);
			++sw;
		}
		else
			++s;
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	return (write(1, "\n", 1));
}
