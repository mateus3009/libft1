/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_get_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 22:53:36 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/30 22:53:44 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void format_get_flags(t_input_format *format, char *str)
{
	while (ft_strchr("#-+ 0", *str) && *str != '\0')
	{
		if (*str == '#' && !format->flags.hashtag)
			format->flags.hashtag = true;
		else if (*str == '-' && !format->flags.negative)
			format->flags.negative = true;
		else if (*str == '+' && !format->flags.signal)
			format->flags.signal = true;
		else if (*str == ' ' && !format->flags.space)
			format->flags.space = true;
		else if (*str == '0' && !format->flags.zero)
			format->flags.zero = true;
		else
			break ;
		format->size++;
		str++;
	}
}
