/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 22:52:59 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/30 22:53:13 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool format_get(t_input_format *format, char *str, va_list args)
{
	if (!format || !str)
		return (false);
	str++;
	format_get_flags(format, str);
	format_get_width(format, str + format->size, args);
	format_get_precision(format, str + format->size, args);
	format_get_specifier_length(format, str + format->size);
	format_get_specifier(format, str + format->size);
	if (format->specifier.value)
		return (true);
	return (false);
}
