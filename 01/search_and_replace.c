/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:56:50 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/17 16:05:10 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char **argv)
{
	char	*str;
	char	*s;
	char	*r;

	if (argc == 4 && (str = *(++argv)))
	{
		s = *(++argv);
		r = *(++argv);
		if (!s[1] && !r[1])
		{
			while (*str)
				if (*str == *s && ++str)
					write(1, &(*r), 1);
				else
					write(1, &(*(str++)), 1);
		}
	}
	return (write(1, "\n", 1));
}
