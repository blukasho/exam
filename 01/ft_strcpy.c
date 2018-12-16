/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 15:22:58 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/16 15:41:24 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcpy(char *s1, char *s2)
{
	char	*tmp;

	tmp = s1;
	while (*s2)
		*(s1++) = *(s2++);
	return (tmp);
}