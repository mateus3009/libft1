/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 10:19:33 by msales-a          #+#    #+#             */
/*   Updated: 2020/02/08 11:09:00 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(char const *str)
{
	int			s;
	long long	n;
	long long	p;

	s = 1;
	n = 0;
	p = n;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		s = (*str == '-') ? -1 : 1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		n = (n * 10) + (*(str++) - '0');
		if (p > n)
			return ((s == -1) ? 0 : -1);
		p = n;
	}
	return (s * n);
}