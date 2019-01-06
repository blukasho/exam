/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:29:34 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/06 14:10:16 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_atoi(char *s)
{
	int		m;
	int		r;

	while (!(r = 0) && *s >= 1 && *s <= 32)
		++s;
	if (!(m = 0) && (*s == '+' || *s == '-'))
		if (*(s++) == '-')
			++m;
	while (*s && *s >= '0' && *s <= '9')
		r = (r * 10) + (*(s++) - 48);
	return ((m ? -r : r));
}

void		ft_putchar (char c)
{
	write (1, &c, 1);
}

void		print_hex(int i)
{
	int		t;

	if (i != 0)
	{
		print_hex(i / 16);
		t = i % 16;
		if (t < 10)
			ft_putchar(t + 48);
		else
			ft_putchar(t + 87);
		i /= 16;
	}
}

int			main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	return (write(1, "\n", 1));
}
