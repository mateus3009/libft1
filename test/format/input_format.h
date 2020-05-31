/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_format.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 23:04:20 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/30 12:31:35 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_FORMAT_H
#define INPUT_FORMAT_H

#include <stdbool.h>

enum	e_specifier_length
{
	none,
	hh,
	h,
	ll,
	l
};

struct		s_input_format_flags
{
	bool	negative;
	bool	signal;
	bool	space;
	bool	hashtag;
	bool	zero;
};

struct		s_input_format_width
{
	bool	defined;
	int		value;
};

struct		s_input_format_precision
{
	bool	defined;
	int		value;
};

struct						s_input_format_specifier
{
	char					value;
	enum e_specifier_length	length;
};

typedef struct						s_input_format
{
	struct s_input_format_flags		flags;
	struct s_input_format_width		width;
	struct s_input_format_precision	precision;
	struct s_input_format_specifier	specifier;
	unsigned int					size;
}									t_input_format;

#endif