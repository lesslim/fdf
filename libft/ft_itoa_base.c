/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 16:46:18 by rberon-s          #+#    #+#             */
/*   Updated: 2019/02/01 17:33:36 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*strminus(int i, int base, char *s, int n)
{
	while (--i)
	{
		if (n % base > -10)
			s[i] = -(n % base) + '0';
		else
			s[i] = -10 - (n % base) + 'A';
		n = n / base;
	}
	s[0] = '-';
	return (s);
}

char		*strplus(int i, int base, char *s, int n)
{
	while (--i > -1)
	{
		if (n % base < 10)
			s[i] = (n % base) + '0';
		else
			s[i] = (n % base) - 10 + 'A';
		n = n / base;
	}
	return (s);
}

char		*ft_itoa_base(int value, int base)
{
	int		n;
	char	*s;
	int		i;

	i = 0;
	n = value;
	if (base < 2)
		return (0);
	while (n != 0 && ++i)
		n = n / base;
	n = value;
	i = (n < 1 ? i + 1 : i);
	s = ft_strnew(i);
	if (n < 0)
		s = strminus(i, base, s, n);
	else
		s = strplus(i, base, s, n);
	return (s);
}
