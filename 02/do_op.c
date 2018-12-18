/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 09:44:20 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/18 10:05:21 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		do_op(int a, char *op, int b)
{
	if (*op == '*')
		printf("%d\n", a * b);
	if (*op == '/')
		printf("%d\n", a / b);
	if (*op == '+')
		printf("%d\n", a + b);
	if (*op == '-')
		printf("%d\n", a - b);
	if (*op == '%')
		printf("%d\n", a % b);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		return(do_op(atoi(*(argv + 1)), *(argv + 2), atoi(*(argv + 3))));
	return(printf("\n"));
}
