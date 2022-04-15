/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   locate_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:51:31 by vnazioze          #+#    #+#             */
/*   Updated: 2022/04/11 19:57:26 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*get_next_min(t_node **stack)
{
	t_node	*head;
	t_node	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->value < min->value))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	fill_index(t_node **stack)
{
	t_node	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

int	locate_low_num_pos(t_node *head, int *low)
{
	int	low_pos;
	int	i;

	*low = head->value;
	i = 0;
	while (head)
	{
		if (head->value < *low)
		{
			*low = head->value;
			low_pos = i;
		}
		head = head->next;
		i++;
	}
	if (low_pos > i / 2)
		return (1);
	return (0);
}

int	locate_high_num_pos(t_node *head, int *high)
{
	int	high_pos;
	int	i;

	*high = head->value;
	i = 0;
	while (head)
	{
		if (head->value > *high)
		{
			*high = head->value;
			high_pos = i;
		}
		head = head->next;
		i++;
	}
	if (high_pos > i / 2)
		return (1);
	return (0);
}
