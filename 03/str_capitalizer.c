/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 11:44:21 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/09 14:27:30 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			is_whitespace(char c)
{
	return ((c >= 1 && c <= 32 ? 1 : 0));
}

char		to_lower(char c)
{
	return ((c >= 'A' && c <= 'Z' ? c + 32 : c));
}

char		to_upper(char c)
{
	return ((c >= 'a' && c <= 'z' ? c - 32 : c));
}

int			str_capitalizer(char *s)
{
	int		w;
	char	c;
	
	w = 0;
	while (*s)
	{
		if (!is_whitespace(*s))
		{
			if (!w && (c = to_upper(*s)))
			{
				++w;
				write(1, &c, 1);
			}
			else if ((c = to_lower(*s)))
				write(1, &c, 1);
		}
		else
		{
			w = 0;
			write(1, &(*s), 1);
		}
		++s;
	}
	return (1);
}

int			main(int argc, char **argv)
{
	int		i;

	if (argc > 1 && !(i = 0))
		while (++i < argc)
			if (str_capitalizer(argv[i]) && (i + 1) < argc)
				write(1, "\n", 1);
	return (write(1, "\n", 1));
}
