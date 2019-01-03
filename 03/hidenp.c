/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 19:07:37 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/03 19:20:15 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		srch_hiden_str(char *s1, char *s2)
{
	while (*s1 && *s2)
		while (*s2)
			if (*(s2++) == *s1)
				++s1;
	return ((!*s1 ? 1 : 0));
}

int		main(int argc, char **argv)
{
	if (argc == 3 && (argc = srch_hiden_str(argv[1], argv[2])))
		write(1, "1", 1);
	if (!argc)
		write(1, "0", 1);
	return (write(1, "\n", 1));
}
