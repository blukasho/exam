/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 18:00:07 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/28 18:24:56 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*(str++)), 1);
}

int		wdmatch(char *s1, char *s2)
{
	while (*s1)
	{
		while (*s2 && *s1 != *s2)
			++s2;
		if (!*s2 && *s1)
			return (0);
		++s1;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		if (wdmatch(argv[1], argv[2]))
			ft_putstr(argv[1]);
	return (write(1, "\n", 1));
}
