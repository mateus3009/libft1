/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 09:32:56 by msales-a          #+#    #+#             */
/*   Updated: 2020/05/29 22:22:43 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include "../libft.h"

#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

size_t	ft_strlen(char const *s);
size_t	ft_strnlen(char const *s, size_t maxlen);
size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);
size_t	ft_strlcat(char *dst, char const *src, size_t dstsize);
char	*ft_strchr(char const *s, int c);
char	*ft_strrchr(char const *s, int c);
char	*ft_strnstr(char const *big, char const *little, size_t len);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
int		ft_atoi(char const *str);
char	*ft_strdup(char const *s1);
char	*ft_strndup(char const *s, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
int		ft_algs_num(long n);
int		ft_algs_num_base(long number, unsigned int radix);
char	*ft_itoa(int n);
char	*ft_itoabase(long number, char const *base);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
