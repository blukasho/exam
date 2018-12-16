/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 12:19:23 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/16 12:43:37 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		ft_reverse_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int			main(int argc, char **argv)
{
	char	*str;
	char	c;

	if (argc == 2 && (str = *(++argv)))
		while (*str && (c = ft_reverse_alpha(*(str++))))
			write(1, &c, 1);
	return (write(1, "\n", 1));
}
