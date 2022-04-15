/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:40:29 by vnazioze          #+#    #+#             */
/*   Updated: 2021/09/16 01:28:11 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*auxiliary;

	if (*lst == NULL)
		*lst = new;
	else
	{
		auxiliary = new;
		auxiliary -> next = *lst;
		*lst = auxiliary;
	}
}
