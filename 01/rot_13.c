/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:38:47 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/17 14:53:23 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		root(char ch)
{
	if ((ch >= 'A' && ch <= 'M') || (ch >= 'a' && ch <= 'm'))
		ch += 13;
	else if ((ch >= 'N' && ch <= 'Z') || (ch >= 'n' && ch <= 'z'))
		ch -= 13;
	write(1, &ch, 1);
}

int			main(int argc, char **argv)
{
	char	*str;

	if (argc == 2 && (str = *(++argv)))
		while (*str)
			root(*(str++));
	return (write(1, "\n", 1));
}
