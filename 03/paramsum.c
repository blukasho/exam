/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 10:28:42 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/06 10:45:29 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_putnbr(int nbr)
{
	if (nbr > 9 && ft_putnbr(nbr / 10))
		ft_putchar((nbr % 10) + 48);
	else
		ft_putchar(nbr + 48);
	return (1);
}

int			main(int argc, char **argv)
{
	argc > 1 ? ft_putnbr(argc - 1) : write(1, "0", 1);
	return (write(1, "\n", 1));
}
