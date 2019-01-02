/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 14:49:33 by blukasho          #+#    #+#             */
/*   Updated: 2019/01/02 16:26:17 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid_base(char c, int base)
{
		if (base > 16)
			return (0);
		if (base <= 10)
			return ((c >= '0' && c <= '9' ? 1 : 0));
		return (((c >= '0' && c <= '9') || (c >= 'a' && c <= ('a' + base - 10))
				|| (c >= 'A' && c <= ('A' + base - 10)) ? 1 : 0));
}

int		is_split(char c)
{
	return ((c >= 1 && c <= 32 ? 1 : 0));
}

int		ft_atoi_base(const char *str, int str_base)
{
	int	m;
	int	r;

	while (!(m = 0) && *str && is_split(*str))
		++str;
	if (!(r = 0) && (*str == '-' || *str == '+'))
		if (*(str++) == '-')
			++m;
	while (*str && is_valid_base(*str, str_base))
		if (*str >= 'a' && *str <= ('a' + str_base - 10))
			r = (r * str_base) + (*(str++) - 'a' + 10);
		else if (*str >= 'A' && *str <= ('A' + str_base - 10))
			r = (r * str_base) + (*(str++) - 'A' + 10);
		else
			r = (r * str_base) + (*(str++) - '0');
	return ((m ? -r : r));
}
