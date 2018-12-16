/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 13:59:48 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/16 15:15:30 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{		
		str = *(++argv);
		while (*str && (*str == ' ' || *str == '\t'))
			++str;
		while (*str && *str != ' ' && *str != '\t')
			write(1, &(*(str++)), 1);
	}
	return(write(1, "\n", 1));
}
