/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_reset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 22:52:08 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/30 22:52:16 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void format_reset(t_input_format *format)
{
	format->flags.hashtag = false;
	format->flags.negative = false;
	format->flags.signal = false;
	format->flags.space = false;
	format->flags.zero = false;
	format->width.defined = false;
	format->width.value  = 0;
	format->precision.defined = false;
	format->precision.value = 0;
	format->specifier.value = '\0';
	format->specifier.length = '\0';
	format->size = 0;
}
