/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_get_specifier.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 22:56:23 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/30 22:56:25 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void format_get_specifier(t_input_format *format, char *str)
{
	if (ft_strchr("nfgecspdiuxX%%", *str))
	{
		format->specifier.value = *str;
		format->size++;
	}
}
