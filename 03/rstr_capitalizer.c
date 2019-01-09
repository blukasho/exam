/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 08:17:01 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/09 09:56:11 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			is_whitespace(char c)
{
	return ((c >= 0 && c <= 32 ? 1 : 0));
}

char		to_lower(char c)
{
	return ((c >= 'A' && c <= 'Z' ? c + 32 : c));
}

char		to_upper(char c)
{
	return ((c >= 'a' && c <= 'z' ? c - 32 : c));
}

int			rstr_capitalizer(char *s)
{
	char	c;

	while (*s && (c = *(s++)))
		if (is_whitespace(*(s)) && (c = to_upper(c)))
			write(1, &c, 1);
		else if ((c = to_lower(c)))
			write(1, &c, 1);
	return(1);
}

int			main(int argc, char **argv)
{
	int		i;
	if (argc > 1 && !(i = 0))
		while (++i < argc)
			if (rstr_capitalizer(argv[i]) && (i + 1) < argc)
				write(1, "\n", 1);
	return (write(1, "\n", 1));
}
