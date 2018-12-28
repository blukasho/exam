/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 16:34:14 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/28 17:32:47 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_memmove(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	*dst = '\0';
}

void		del_chars(char c, char *s1, char *s2)
{
	while (*s1)
		if (*s1 == c)
			ft_memmove(s1, s1 + 1);	
		else
			++s1;
	while (*s2)
		if (*s2 == c)
			ft_memmove(s2, s2 + 1);	
		else
			++s2;
}

void		ft_union(char *s1, char *s2)
{
	while (*s1 && write(1, &(*s1), 1))
		del_chars(*s1, s1, s2);
	while (*s2 && write(1, &(*s2), 1))
		del_chars(*s2, s1, s2);
}

int			main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	return (write(1, "\n", 1));
}
