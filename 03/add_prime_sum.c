/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:49:14 by blukasho          #+#    #+#             */
/*   Updated: 2019/04/22 17:31:03 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			is_prime(long i)
{
	long	r;

	r = i;
	while (--r > 1)
		if ((i % r) == 0)
			return (0);
	return (i > 1 ? 1 : 0);
}

long		sum_prime(long n)
{
	long	r;

	r = 0;
	while (n)
		if (is_prime(n--))
				r += n + 1;
	return (r);
}

long		ft_atoi(char *s)
{
	int		m;
	long	r;

	while (!(m = 0) && *s && *s >= 1 && *s <= 32)
		++s;
	if (!(r = 0) && (*s == '-' || *s == '+'))
		if (*(s++) == '-')
			++m;
	while (*s >= '0' && *s <= '9')
		r = (r * 10) + (*(s++) - 48);
	return (m ? -r : r);
}

void		ft_putnbr(long i)
{
	char	n;

	if (i > 9)
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

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2 && argv)
		ft_putnbr(sum_prime(ft_atoi(argv[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
