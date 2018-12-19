/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 12:58:00 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/19 14:33:25 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	char	*tmp;
	char	*s;
	char	ch;

	if (str && (tmp = str))
	{
		s = str;
		while (*tmp)
			++tmp;
		while (--tmp > str && (ch = *tmp))
		{
			*tmp = *str;
			*(str++) = ch;
		}
		str = s;
	}
	return (str);
}
