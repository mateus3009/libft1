/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 15:15:33 by msales-a          #+#    #+#             */
/*   Updated: 2020/02/08 17:58:54 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;

	if (!lst)
		return (0);
	if (f)
		dst = ft_lstnew(f(lst->content));
	if (del && !dst->content)
	{
		ft_lstclear(&lst, del);
		return (0);
	}
	dst->next = ft_lstmap(lst->next, f, del);
	return (dst);
}