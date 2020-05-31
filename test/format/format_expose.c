/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_expose.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 22:52:30 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/30 22:52:41 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void format_expose(t_input_format *format)
{
	printf("format->flags.hashtag = %d;\n", format->flags.hashtag);
	printf("format->flags.negative = %d;\n", format->flags.negative);
	printf("format->flags.signal = %d;\n", format->flags.signal);
	printf("format->flags.space = %d;\n", format->flags.space);
	printf("format->flags.zero = %d;\n", format->flags.zero);
	printf("format->width.defined = %d;\n", format->width.defined);
	printf("format->width.value  = %d;\n", format->width.value);
	printf("format->precision.defined = %d;\n", format->precision.defined);
	printf("format->precision.value = %d;\n", format->precision.value);
	printf("format->specifier.value = %c;\n", format->specifier.value);
	printf("format->specifier.length = %d;\n", format->specifier.length);
	printf("format->size = %d;\n", format->size);
}
