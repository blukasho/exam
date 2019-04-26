/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 14:00:03 by blukasho          #+#    #+#             */
/*   Updated: 2019/04/26 14:05:49 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_space_tab(char c)
{
	return ((c == ' ' || c == '\t') ? 1 : 0);
}

int		has_word(char *str)
{
	while (*str)
		if (!is_space_tab(*(str++)))
			return (1);
	return (0);
}

void	expand_str(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		i = 0;
		while (*str && is_space_tab(*str))
			++str;
		while (*str && !is_space_tab(*str) && (i = 1))
			write(1, (str++), 1);
		if (*str && has_word(str))
			write(1, "   ", 3);
	}
}

int		main(int argc, char **argv)
{
	--argc;
	++argv;
	if (argc == 1)
		expand_str(*argv);
	write(1, "\n", 1);
	return (0);
}
