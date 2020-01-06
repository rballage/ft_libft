/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 10:30:24 by rballage          #+#    #+#             */
/*   Updated: 2020/01/06 16:15:29 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *list;

	list = NULL;
	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	list->next = NULL;
	list->content = content;
	return (list);
}
