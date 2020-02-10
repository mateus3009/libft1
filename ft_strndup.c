/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:08:21 by msales-a          #+#    #+#             */
/*   Updated: 2020/02/08 18:00:08 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	int		index;
	char	*dst;

	index = ft_strlen(s);
	index = ((int)n < index) ? n : index;
	if (!(dst = (char*)ft_calloc((index + 1), sizeof(char))))
		return (0);
	ft_strlcpy(dst, s, index + 1);
	return (dst);
}
