/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 12:14:16 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/30 10:44:29 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_memmove(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	*dst = '\0';
}

void		ft_putstr(char *s)
{
	while (*s)
		write(1, &(*(s++)), 1);
}

int			epur_str(char *s)
{
	while (*s && (*s == ' ' || *s == '\t'))
		ft_memmove(s, s + 1);
	while (*s)
	{
		if ((*s == ' ' || *s == '\t') && (*s = ' '))
			while (*(s + 1) == ' ' || *(s + 1) == '\t')
				ft_memmove(s + 1, s + 2);
		++s;
	}
	if (*(--s) == ' ')
		*s = '\0';
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc == 2 && !epur_str(argv[1]))
		ft_putstr(argv[1]);
	return (write(1, "\n", 1));
}
