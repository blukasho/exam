/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 19:12:20 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/29 11:00:23 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int			is_prime(int i)
{
	int		n;

	n = i;
	while (--n > 1)
		if ((i % n) == 0)
			return (0);
	return ((i > 1 ? 1 : 0));
}

int			prime_sum(int p)
{
	int		i;
	int		r;

	i = 0;
	r = 0;
	while (++i <= p)
		if (is_prime(i))
			r += i;
	return (r);
}

void		ft_putnbr(int i)
{
	char	n;

	if (i >= 10)
	{
		n = (i % 10) + 48;
		ft_putnbr(i / 10);
		write(1, &n, 1);
	}
	else
	{
		n = i + 48;
		write(1, &n, 1);
	}
}

int			ft_atoi(char *s)
{
	int		m;
	int 	res;

	while (*s >= 1 && *s <= 32 && *s)
		++s;
	if (!(res = 0) && (*s == '-' || *s == '+'))
		if (!(m = 0) && *(s++) == '-')
			m = 1;
	while (*s >= '0' && *s <= '9')
		res = (res * 10) + (*(s++) - '0');
	return (m ? -res : res);
}

int			main(int argc, char **argv)
{
	if (argc == 2 && (argc = ft_atoi(argv[1])) > 0)
		ft_putnbr(prime_sum(argc));
	else
		return (write(1, "0\n", 2));
	return (write(1, "\n", 1));
}
