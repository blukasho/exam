/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:56:30 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/17 15:09:16 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		rotone(char c)
{
	if (c >= 'A' && c <= 'Y')
		++c;
	else if (c >= 'a' && c <= 'y')
		++c;
	else if (c == 'z' || c == 'Z')
		c -= 25;
	write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	char	*str;

	if (argc == 2 && (str = *(++argv)))
	{
		while (*str)
			rotone(*(str++));
	}
	return (write(1, "\n", 1));
}
