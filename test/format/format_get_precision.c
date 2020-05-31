/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_get_precision.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 22:55:06 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/30 22:55:08 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void format_get_precision(t_input_format *format, char *str, va_list args)
{
	if (*str == '.')
	{
		format->precision.defined = true;
		format->size++;
		str++;
		if (*str == '*')
		{
			format->width.value = va_arg(args, int);
			format->size++;
			str++;
		}
		else if (ft_isdigit(*str))
		{
			format->width.value = ft_atoi(str);
			while (ft_isdigit(*str))
			{
				format->size++;
				str++;
			}
		}
	}
}
