/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_get_specifier_length.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 22:55:37 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/30 22:55:39 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void format_get_specifier_length(t_input_format *format, char *str)
{
	int		index;
	char	**specifier_lengths;
	size_t	string_length;

	index = 0;
	specifier_lengths = (char*[5]){"hh", "h", "ll", "l", NULL};
	while (specifier_lengths[index])
	{
		string_length = ft_strlen(specifier_lengths[index]);
		if (!ft_strncmp(str, specifier_lengths[index], string_length))
		{
			format->specifier.length = index + 1;
			format->size += string_length;
			break;
		}
		index++;
	}
}
