/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 14:39:31 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/09 15:24:14 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *s)
{
	int m;
	int r;

	while (!(r = 0) && *s && *s >= 1 && *s <= 32)
		++s;
	if (!(m = 0) && (*s == '-' || *s == '+'))
		if (++s && *(s - 1) == '-')
			++m;
	while (*s && *s >= '0' && *s <= '9')
		r = (r * 10) + (*(s++) - 48);
	return ((!m ? r : -r));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int i)
{
	if (i >= 10 && ft_putnbr(i / 10))
		ft_putchar((i % 10) + 48);
	else
		ft_putchar(i + 48);
	return (1);
}

void	tab_multi(int n)
{
	int i;

	i = 0;
	while (++i < 10)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2 && (argc = ft_atoi(argv[1])) > 0)
		tab_multi(argc);
	else
		write(1, "\n", 1);
	return (0);
}
