/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_get_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 22:54:10 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/30 22:54:20 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void format_get_width(t_input_format *format, char *str, va_list args)
{
	if (*str == '*')
	{
		format->width.defined = true;
		format->width.value = va_arg(args, int);
		format->size++;
		str++;
	}
	else if (ft_isdigit(*str))
	{
		format->width.defined = true;
		format->width.value = ft_atoi(str);
		while (ft_isdigit(*str))
		{
			format->size++;
			str++;
		}
	}
}
