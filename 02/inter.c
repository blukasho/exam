/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 14:35:11 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/19 16:35:11 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	str_move(char *s1, char *s2)
{
	while (*s2)
		*(s1++) = *(s2++);
	*s1 = '\0';
}

static int		srch_ch_in_str(char *s1, char ch)
{
	while (*s1)
		if (*(s1++) == ch)
			return (1);
	return (0);
}

static void		del_ch_in_str(char *s1, char *s2, char ch)
{
	while (*s1)
		if (*(s1++) == ch)
			str_move(s1 - 1, s1);
	while (*s2)
		if (*(s2++) == ch)
			str_move(s2 - 1, s2);
}

static void		inter(char *s1, char *s2)
{
	if (s1 && s2)
	{
		while (*s1)
			if (srch_ch_in_str(s2, *s1) && write(1, &(*s1), 1))
				del_ch_in_str(s1, s2, *s1);
			else
				str_move(s1, s1 + 1);
	}
}

int			main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	return (write(1, "\n", 1));
}
